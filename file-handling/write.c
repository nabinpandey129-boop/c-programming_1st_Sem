#include<stdio.h>

struct info
{
  char name[20];
  int age;
  char gen;
};

int main()
{
  struct info s1;
  FILE *fp;

  fp = fopen("file1.txt", "a");

  int n;
  printf("Enter number of students: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    getchar(); // to consume the newline character left by previous input
    printf("Enter name: ");
    // scanf(" %[^\n]", s1.name);
    fgets(s1.name, 20, stdin);
   printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter gender: ");
    scanf(" %c", &s1.gen);

    fprintf(fp, "%s\n %d \n%c\n", s1.name, s1.age, s1.gen);
  }

  fclose(fp);

  return 0;
}