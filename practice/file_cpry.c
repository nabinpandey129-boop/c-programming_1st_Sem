#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("file1.txt", "r");
   

    // Open destination file in write mode
    destFile = fopen("file2.txt", "w");
   

    // Copying process: read until End Of File (EOF)
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
