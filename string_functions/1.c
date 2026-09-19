#include<stdio.h>
#include<string.h>    
int main()
{
  char str1[100];
  int i;
  printf("enter the name :");
  fgets(str1,sizeof(str1),stdin);
  for (i = 0; str1[i] != '\0'; i++)
  {
     
    if (str1[i] >= 'a' && str1[i] <= 'z')
    {
    str1[i] = str1[i] - 32;
    }
  }
  printf("uppercase: %s\n", str1);
  return 0;
  
}