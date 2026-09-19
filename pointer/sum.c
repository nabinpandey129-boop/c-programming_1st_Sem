#include<stdio.h>
int main()  
{
  int arr[]={1,2,3,4,5};
  int *p;
  int sum=0;
  p=arr;
  for(int i=0;i<5;i++)
  {
    sum=sum+*p;
    p++;
  }
  printf("Sum of array elements is %d\n",sum);
    return 0;
}