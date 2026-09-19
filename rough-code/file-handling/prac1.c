#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file for reading
    sourceFile = fopen("abc.doc", "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open abc.doc\n");
        return 1;
    }

    // Open (or create) the destination file for writing
    destFile = fopen("xyz.doc", "w");
    if (destFile == NULL) {
        printf("Error: Could not create xyz.doc\n");
        fclose(sourceFile);
        return 1;
    }

    // Read character by character until End Of File (EOF)
    while ((ch = fgetc(sourceFile)) != EOF) {
        // Convert to uppercase and write to destination
        fputc(toupper(ch), destFile);
    }

    printf("File copied and converted to uppercase successfully.\n");

    // Close both files to free up resources
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}