#include<stdio.h>
 int main()
 {int a,b;
printf("enter the number1: ");
scanf("%d",&a);
printf("enter the number2: ");
scanf("%d",&b);
printf("enter the choice:");
char ch;scanf(" %c",&ch);
switch(ch)
{
  case '+':printf("the sum is %d",a+b);break;
  case '-':printf("the difference is %d",a-b);break;    
  case '*':printf("the product is %d",a*b);break;
  case '/':printf("the quotient is %d",a/b);break;
  case '%':printf("the remainder is %d",a%b);break;
  default:printf("invalid choice");

}
return 0;


 }