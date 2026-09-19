#include <stdio.h>

int main() {
    int i, n;

    printf("Enter number of names: ");
    scanf("%d", &n);

    char name[n][100]; 

    for(i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %s", &name[i]);   
    }

    printf("\nCharacters in array: ");
    for(i = 0; i < n; i++) {
        printf("%s\t", name[i]);
    }

    return 0;
}