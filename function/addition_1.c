#include<stdio.h>
int addition()
{
  int a, b, sum;
  printf("enter the 1st number:");
  scanf("%d",&a);
  printf("enter the 2nd number:");
  scanf("%d",&b);
  sum=a+b;
  printf("SUM=%d\n",sum);
  return 0;
}
int divide()
{
  int a, b, divide;
  printf("enter the 1st number:");
  scanf("%d",&a);
  printf("enter the 2nd number:");
  scanf("%d",&b);
  divide=a/b;
  printf("DIVIDE=%d\n",divide);
  return 0;
}
int multiply()
{
  int a, b, multiply;
  printf("enter the 1st number:");
  scanf("%d",&a);
  printf("enter the 2nd number:");
  scanf("%d",&b);
  multiply=a*b;
  printf("MULTIPLY=%d\n",multiply);
  printf("hello");
  return 0;
}

int main()
{
  addition();
  multiply();
  divide();
  return 0;
}
