#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for (i = 1; i <= rows; i++) 
    {
        for (space = 1; space <= rows - i; space++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
          printf(" *");
        }
        printf("\n");
    }

    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int i, j;
//     for ( i = 0; i <5; i++)
//     {
//       for (j = 0; j <i; j++)
//       {
//         printf("*");
//       }
//         printf("\n");
//     }
//  return 0;   
// }