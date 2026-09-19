#include<stdio.h>

int main()
{
  int m[2],i,sum=0;
  float avg;

  printf("Enter 2 numbers: ");
  for(i=0;i<2;i++)
  {
    scanf("%d",m+i);
    printf("\n");
  }
  for(i=0;i<2;i++)
  {
    sum+=*(m+i);
  }
  printf("Sum: %d",sum);
  avg=(float)sum/2;
  printf("\nAverage: %.2f",avg);
  return 0;
}