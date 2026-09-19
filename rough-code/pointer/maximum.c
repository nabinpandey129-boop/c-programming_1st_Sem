#include<stdio.h>
int main()
{
  int arr[5];
  int *p;
  int max=0;
  p=arr;
  printf("Enter 5 elements of array\n");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<5;i++)
  {
    if(*p>max)
    {
      max=*p;
    }
    p++;
  }
  printf("Maximum of array elements is %d\n",max);
    return 0;
}