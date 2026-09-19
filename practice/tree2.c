#include<stdio.h>
int main()
{
    int i, j,space, r=5;
 for ( i = 1; i <=r; i++)
 {
   for ( space = 1; space <=r-i; space++)
   {
    printf(" ");
   }
   for ( j =1; j <=i; j++)
   {
    printf("%d ",i);
   }
   printf("\n");
   
 }
    return 0;
}