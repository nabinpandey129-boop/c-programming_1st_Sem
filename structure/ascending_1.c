#include<stdio.h>
#include<string.h>

struct student
{
  char name[50];
  float marks;

};

int main()
{
  struct student s1[100] , temp;
  int n , i , j;
  printf("Enter the number of students:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter name of student %d:",i+1);
    scanf("%s",s1[i].name);
    printf("Enter marks of student %d:",i+1);
    scanf("%f",&s1[i].marks);
  }
  for ( i = 0; i < n; i++)
  {
    for ( j =0; j < i; j++)
    {
      if(s1[i].marks < s1[j].marks)
      {
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
      }
    }
    
  }
  for ( i = 0; i < n; i++)
  {
    printf("Student %d: %s\n", i+1, s1[i].name);
    printf("Marks: %.2f\n", s1[i].marks);
  }
  
  

  return 0;
}