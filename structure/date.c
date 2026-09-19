#include<stdio.h>

struct user_info
{
    int id;
    char full_name[20];
    char gender;
};

struct Address
{
    char city[20];
    char country[20];
};

struct Date
{
    int day;
    char month[10];
    int year;
};

void greetings(struct Date function )
{

  printf("%s",function.month );  
  printf("hello%d",function.day );  
  printf("hello%d",function.year );
}

int main()
{
  struct Date d = {3,"Feb",1990};

  greetings(d);

  return 0;
}