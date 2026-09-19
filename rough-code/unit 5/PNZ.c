#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if (a>0)
    {
        printf("positive\n");
    }
    else if (a<0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero");
    }
    return 0;
    
}