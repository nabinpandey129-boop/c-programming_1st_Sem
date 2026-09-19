#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;
    int sum;

    printf("Enter elements of 1st 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplying matrices
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum = 0;
            for(k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    // Display result
    printf("Resultant 2x2 Matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
