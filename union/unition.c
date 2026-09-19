#include<stdio.h>

union Data{
  int i;
  float f;
};
int main()
{
  union Data D1;
  D1.i=10;
  D1.f=11.11;
  printf("Integer value: %d\n", D1.i);
  printf("Float value: %f\n", D1.f);
  return 0;
