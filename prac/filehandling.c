#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("example.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the data to write in the file:\n");
    char data[100];
    fgets(data, sizeof(data), stdin);

    fprintf(fp, "%s", data);
    fclose(fp);

    // Open file for reading
    fp = fopen("example.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char buffer[100];                                                                            
    printf("Data read from file:\n");

    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
  }