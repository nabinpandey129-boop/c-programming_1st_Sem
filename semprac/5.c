#include<stdio.h>
void sum(int a[2][2], int b[2][2], int c[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}


void subtraction(int a[2][2], int b[2][2], int c[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}



void multiplication(int a[2][2], int b[2][2], int c[2][2])
{
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


int main()
{
int a[2][2], b[2][2], c[2][2], i, j, k;

printf("Enter elements of first matrix:\n");
for (i = 0; i < 2; i++)
{
    for (j = 0; j < 2; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("Enter elements of second matrix:\n");
for (i = 0; i < 2; i++)
{
    for (j = 0; j < 2; j++)
    {
        scanf("%d", &b[i][j]);
    }

}
printf("enter the choice\n 1 for sum,\n 2 for subtraction,\n 3 for multiplication\n");
scanf("%d", &k);
switch (k)
{
    case 1:
         sum(a, b, c);
         printf("sum of two matrix is:\n");
         for (i = 0; i < 2; i++)
         {
            for (j = 0; j < 2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
         }
         break;
    case 2:
        subtraction(a, b, c);
        printf("subtraction of two matrix is:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        break;

    case 3:
        multiplication(a, b, c);
        printf("multiplication of two matrix is:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("invalid choice\n");
}

return  0;




}




