#include<stdio.h>
#include<string.h>
int main()
{
   char name[10000000];
   printf("enter your name:");

   //formatted reading string

  //  scanf("%s",name);

  //unformatted reading string
  fgets(name,sizeof(name),stdin);
   printf("name:%s",name);

   //
   return 0;
}