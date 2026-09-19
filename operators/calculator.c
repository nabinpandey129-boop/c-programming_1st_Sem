#include<stdio.h>
int main()
{
int num1, num2;
float res;
char operators;
printf("enter the num:");
scanf("%d",&num1);
printf("enter the num:");
scanf("%d",&num2);

printf("select the operators(+,-,*,/)=");
scanf(" %c",&operators);
res =(operators == '+')?num1+num2:
(operators == '*')?num1*num2:
(operators == '/')?num1/num2:
(operators == '%')?num1%num2:
(operators == '-')?num1-num2: 0;
printf("Result=%.2f",res);

return 0;
}