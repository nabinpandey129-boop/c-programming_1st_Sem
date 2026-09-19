#include<stdio.h>
int main()
{int i, j, k;
int a[2][2],b[2][2],c[2][2],sum;
printf("enter the first elements of 2X2 matrix:\n");
for ( i = 0; i <2; i++)
{
    for ( j = 0; j <2; j++)
    {
        printf("enter the element a[%d][%d]:",i,j);        scanf("%d",&a[i][j]);
    }
}
printf("enter the second elements of 2x2 matrix:\n");
for ( i = 0; i <2; i++)
{
    for ( j = 0; j <2; j++)
    {
        printf("enter the element b[%d][%d]:",i,j);   
         scanf("%d",&b[i][j]);
    }
    
}
for ( i = 0; i <2; i++)
{
    for ( j = 0; j <2; j++)
    {
        sum=0;
        for ( k = 0; k <2; k++)
        {
            sum=sum+ a[i][k] * b[k][j];
        }
        c[i][j] = sum;
    }

}
printf("resultant of 2x2 matrix :\n");
for ( i = 0; i <2; i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}