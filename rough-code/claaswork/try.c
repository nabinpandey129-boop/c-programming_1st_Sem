#include <stdio.h>

int main() {
    int rows = 3;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print the number 'i', 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);

        }
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int rows = 5;
//     for (int i = 1; i <= rows; i++) {
//         // Print leading spaces
//         for (int j = 1; j <= rows - i; j++) {
//             printf("  ");
//         }
//         // Print stars
//         for (int k = 1; k <= i; k++) {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int rows = 5; // Total number of lines to print

//     for (int i = 1; i <= rows; i++) {
        
//         // 1. Print leading spaces for alignment
//         for (int j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }

//         // 2. Print ascending numbers from 1 to i
//         for (int j = 1; j <= i; j++) {
//             printf("%d", j);
//         }

//         // 3. Print descending numbers from i-1 down to 1
//         for (int k = i - 1; k >= 1; k--) {
//             printf("%d", k);
//         }

//         // Move to the next line after completing a row
//         printf("\n");
//     }

//     return 0;
// }