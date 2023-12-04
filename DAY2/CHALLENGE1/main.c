#include <stdio.h>
#include <stdlib.h>
#include <String>
int main()
{
    FILE *file;
    char line[100]; // Adjust the size as needed
    int len = 0;
    int *lenp = &len;

    // Open the file for reading
    file = fopen("input.txt", "r");

    // Check if the file opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Read and print each line in the file
    while (fgets(line, sizeof(line), file) != NULL)
    {
        int currentSum[3] = [ 0, 0, 0 ];
        len = strlen(line);
        char currentWord[3];
        for (int i = 0; i < len; ++i)
        {
            // This section will check if the thing is a integer or not.
            char x = line[i];
            char *xP = &x;
            int y = x;
            free(xP);

            if (x <= 39 && x >= 30)
            {

                printf("This character represents an integer \n");
                strcat(currentWord, x);
            }
            if (strcom(line[i + 1], ""))
            {
                switch (line[i + 2])
                {
                case 'r':
                    ++currentSum[0];
                    break;
                case 'g':
                    ++currentSum[1];
                    break;
                case 'b':
                    ++currentSum[2];
                    break;
                }
            }
        }
    }

    free(lenp);

    // Close the file
    fclose(file);

    return 0; // Exit successfully
}
