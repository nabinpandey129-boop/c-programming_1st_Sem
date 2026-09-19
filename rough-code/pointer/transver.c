#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    
    
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';

    char *p = str;
    printf("Traversed string: "); 

  
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }

    printf("\n");
    return 0;
}