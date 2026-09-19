#include<stdio.h>
int main()
{
    int a[2][2], b[2][2],c[2][2];
    int  i, j, k,sum;
    printf("enter the elemets of first 2x2 matrix:\n");

    for ( i = 0; i <2; i++)
    {
    for ( j = 0; j <2; j++)
    {
        printf("the element of a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
    }
 printf("enter the elemets of second 2x2 matrix:");
    for ( i = 0; i <2; i++)
    {
     for ( j = 0; j <2; j++)
    {
        printf("the element of b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
    }
    }
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
        sum=0;
        for (k = 0; k <2; k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
    }
    }
        for ( i = 0; i <2; i++)
        {
         for (j = 0; j <2; j++)
         {
        printf("%d ",c[i][j]);
         }
         printf("\n");
        } 
    
    return 0;
}