 #include<stdio.h>
#include<stdlib.h>
struct student
{
  int roll;
  float marks;

};
int main()
{
  struct student s1={10,88.5};
  struct student *ptr;
  ptr=&s1;
  printf("Roll number: %d\n",ptr->roll);
  printf("Marks: %.2f\n",ptr->marks);
  return 0;


}
