#include<stdio.h>
int main()  
{
  int arr[]={1,2,30,4,5};
  int *p=arr;
 p+=2; // Move pointer to the next element
  printf("Array elements %d\n",*p);
  // printf("Array elements %d\n",arr[3]);
  


  
    return 0;
} 