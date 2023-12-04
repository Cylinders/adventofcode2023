#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Day 2 Challenge 2 AdventOfCode 2023;
// C is fun. 
// Ruthvik Venkatesan - 12/4/23



int main()
{
    FILE *file;
    char line[175]; // Adjust the size as needed --> Realistically not needed. 
    int len = 0;
    int *lenp = &len;
    int sumCorrect = 0; 
    

    // Open the file for reading
    file = fopen("input.txt", "r");

    // Check if the file opened successfully
    if (file == NULL)
    {
        // BECAUSE FILE IS A POINTER TO AN EXISTING FILE IN NTFS; CAN BE NULL; 
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Read and print each line in the file
    while (fgets(line, sizeof(line), file) != NULL)
    {
        int currentSum[3] = {0, 0, 0};
        len = strlen(line);
        char currentNumber[3];
        // 0: red; 1: green; 2: blue
        char currentLetter; 
        int semiLoc;
        char currentChar; 
        char *charp = &currentChar; 

        for (int i = 0; i < len; ++i)
        {

            currentChar = line[i];
            if (currentChar < 40 && currentChar >= 30) {
                // This an int FR
                if (line[i+1] == " ") {
                    
                    // this means the num ended; 
                    switch (line[i+2]) {
                        case 'r':
                            currentSum[0] = currentSum[0] + currentChar - 30;
                            break;   
                        case 'g':
                            currentSum[1] = currentSum[1] + currentChar - 30;
                            break; 
                        case 'b':
                            currentSum[2] = currentSum[2] + currentChar - 30;
                            break; 
                    }

                    

                }
            }


            
        }

        free(&currentNumber);
        free(&currentLetter);
    }

    free(lenp);

    // Close the file
    fclose(file);

    return 0; // Exit successfully
}
