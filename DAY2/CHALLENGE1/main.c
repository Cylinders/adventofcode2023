#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[100];  // Adjust the size as needed
    int len = 0; 
    int * lenp = &len; 

    printf("hey");
    return 0;   

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
            // This section will check if the thing is a integer or not. 
            char x = line[0];
            char * character = &x;
            int isIt; 
            int * is = &isIt; 
            switch (x) {
                case '0':
                    isIt = 0; 
                    break;
                case '1':
                    isIt = 1; 
                    break;
                case '2':
                    isIt = 2; 
                    break;
                case '3':
                    isIt = 3; 
                    break;
                case '4':
                    isIt = 4; 
                    break;
                case '5':
                    isIt = 5; 
                    break;
                case '6':
                    isIt = 6; 
                    break;
                case '7':
                    isIt = 7; 
                    break;
                case '8':
                    isIt = 8; 
                    break;
                case '9':
                    isIt = 9; 
                    break;
                default: 
                    free(is);
            }

            if (free != NULL) {
                if (i < len - 1) {
                    
                }
            }
        }
    }

    free(lenp);
    
    

    // Close the file
    fclose(file);

    return 0; // Exit successfully
}

int returnCharNum(int * x){

    switch (*x){
        
    }

}