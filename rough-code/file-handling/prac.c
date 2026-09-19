#include<stdio.h>
#include<stdlib.h>
struct data
{
char name[20];
int age;

};
void Read_from_file()
{
  FILE *fp;
  char name[20];
  int age; 
  
  fp = fopen("file2.txt","r");
  if(fp == NULL)
  {
    printf("Error opening file\n");
    return;
  }
  while(fscanf(fp,"%s %d",name,&age) != EOF)
  {
    printf("Name: %s, Age: %d\n",name,age);
  }
  fclose(fp);
}
void Write_to_file()
{
  struct data d;
  FILE *fp;
  fp = fopen("file2.txt","a");
  int n;
  printf("Enter the number of records you want to enter: ");
  scanf("%d",&n);
  printf("Enter name: ");
  scanf("%s",d.name);
  printf("Enter age: ");
  scanf("%d",&d.age);
  fprintf(fp,"%s \n%d\n",d.name,d.age);
  fclose(fp);
}

int main()
{
while (1)
{
  int choice;
  printf("1. Read from file\n");
  printf("2. Write to file\n");
  printf("3. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);


switch (choice)
{
case 1:
  Read_from_file();
  break;
   
case 2:
  Write_to_file();
    break;
    case 3:
    exit(0);
default:
    printf("Invalid choice\n");
}
}

return 0;

}