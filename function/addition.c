#include<stdio.h>
int addition(int a,int b)
{
  int sum;

  sum=a+b;
  return sum;
}

int main()
{
int a=30;
int b=89;
int totalsum= addition(a,b);
printf("sum=%d",totalsum);
return 0;
}