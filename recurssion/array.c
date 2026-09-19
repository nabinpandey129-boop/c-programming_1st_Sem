#include<stdio.h>
void printingstring(char name[],char name1[2])
{
    printf("The name is %s\n",name);
    printf("The name is %s\n",name1);
}
int main(){
  printingstring("Hello World","Hi");
}