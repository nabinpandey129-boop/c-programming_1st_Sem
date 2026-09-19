#include<stdio.h>
int main()
{
    int a, b;
    char c;
    int res;
    printf("enter the num1:");
    scanf("%d",&a);
    printf("enter the num2:");
    scanf("%d",&b);
    printf("enter the choice:");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':res= a+b;
        printf("result=%d",res);
        break;
         case '*':res= a*b;
        printf("result=%d",res);
        break;
         case '-':res= a-b;
        printf("result=%d",res);
        break;
    
    default:
    printf("inivalid number");
        break;
    }

}