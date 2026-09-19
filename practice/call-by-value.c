#include<stdio.h>
void swap(int a,int b)
{
  int temp;
  printf("Before swapping a=%d b=%d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("After swapping a=%d b=%d\n",a,b);
}
int main()
{
  int a=5, b=10;
  
  swap(a,b);
  return 0;

}