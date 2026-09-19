#include <stdio.h>

int main() {
    int i, n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    char name[n]; 

    for(i = 0; i < n; i++) {
        printf("Enter a character: ");
        scanf(" %c", &name[i]);   
    }

    printf("\nCharacters in array: ");
    for(i = 0; i < n; i++) {
        printf("%c ", name[i]);
    }

    return 0;
}
