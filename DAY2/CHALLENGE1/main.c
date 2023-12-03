#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[100];  // Adjust the size as needed
    int len = 0; 
    int * lenp = &len; 


    // Open the file for reading
    file = fopen("input.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Read and print each line in the file
    while (fgets(line, sizeof(line), file) != NULL) {
        len = strlen(line);
        for (int i = 0; i < len; ++i) {

        }
    }



    // Close the file
    fclose(file);

    return 0; // Exit successfully
}