#include<stdio.h>
#include<string.h>
  struct student

  {
    char name[20];
    int roll;
    float marks;
    char subject[20];
  };
int main ()
{
  struct student s[1000],temp;
  int n;

  printf("Enter number of students: ");
  scanf("%d", &n);
for (int i = 0; i <n; i++)
{
  printf("Enter name: ");
  scanf("%s", s[i].name);   
  printf("Enter roll: ");
  scanf("%d", &s[i].roll);

  for (int i = 0; i <5; i++)
  {
    printf("Enter subject %d :", i + 1);
    scanf("%s", s[i].subject);
   }
    for (int i = 0; i <5; i++)
    {
     printf("Enter marks of %s: ", s[i].subject);
    scanf("%f", &s[i].marks);
  } 
 
    
    

}
for (int i = 0; i < n; i++)
{

  for (int j = 0; j <i; j++)
  {
  if (s[j].name<s[i].name)
  {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
  }
  }
  
}
for (int i = 0; i < n; i++)
{
  printf("Name: %s\n", s[i].name);
  printf("Roll: %d\n", s[i].roll);
for (   i = 0; i <5; i++)
{
   printf("Subject: %s\n", s[i].subject);
  printf("Marks: %.2f\n\n", s[i].marks);
}


}
float total = 0;
for (int i = 0; i < 5; i++)
{
  total += s[i].marks;
}
printf("Total marks: %.2f\n", total);

return 0;




}