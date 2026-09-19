//create and array of n numbers using malloc AND print them 
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n , i;
  int *array;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  array=(int *)malloc(n*sizeof(int));

  for ( i = 0; i < n; i++)
  {
   
      scanf("%d", &array[i]);
  }
  printf("The elements are: ");
  for ( i = 0; i < n; i++)
  {
      printf("%d ", array[i]);
  }
  free(array);
  return 0;
  
}