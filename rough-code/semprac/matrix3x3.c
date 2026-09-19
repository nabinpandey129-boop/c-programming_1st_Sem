#include<stdio.h>
int main()
{
    int a[3][3], b[3][3],c[3][3];
    int  i, j, k,sum;
    printf("enter the elemets of first 3x3 matrix:\n");

    for ( i = 0; i <3; i++)
    {
    for ( j = 0; j <3; j++)
    {
        printf("the element of a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
    }
 printf("enter the elemets of second 3x3 matrix:\n");
    for ( i = 0; i <3; i++)
    {
     for ( j = 0; j <3; j++)
    {
        printf("the element of b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
    }
    }
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        
        for (k = 0; k <3; k++)
        {
            sum=a[i][k]+b[k][j];
        }
        c[i][j]=sum;
    }
    }
        for ( i = 0; i <3; i++)
        {
         for (j = 0; j <3; j++)
         {
        printf("%d ",c[i][j]);
         }
         printf("\n");
        } 
    
    return 0;
}