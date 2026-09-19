//c programming to count the alphabet , digits, special characters and spaces in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0, spaces = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            continue;   // ignore newline
        }
        else if (isalpha(str[i])) {
            alphabets++;
        } 
        else if (isdigit(str[i])) {
            digits++;
        } 
        else if (str[i] == ' ') {
            spaces++;
        } 
        else {
            special++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special Characters: %d\n", special);

    return 0;
}