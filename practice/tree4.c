#include<stdio.h>
int main()
{
    int i, j, k,r=5;
    for ( i = 1; i <=5; i++)
    {
    for ( j =1; j <=r-i;j++)
    {
        printf("  ");
    }
    for ( k =1; k <=i; k++)
    {
        printf(" *");
    }

    printf("\n");
    }
    return 0;
}