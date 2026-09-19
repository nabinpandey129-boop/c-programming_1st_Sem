#include  <stdio.h>

struct students
{
  int id;
  char name[20];
  float marks;
};

int main()
{
  struct students ST;
FILE *st_info;
st_info=fopen("student_info.txt", "w");

printf("Enter student id: ");
scanf("%d", &ST.id);

printf("Enter student name: ");
scanf("%s", ST.name);
getchar(); // Consume the newline character left by fgets
printf("Enter student marks: ");
scanf("%f", &ST.marks);

fprintf(st_info, "Student id: %d\n", ST.id);

fprintf(st_info, "Student name: %s\n", ST.name);

fprintf(st_info, "Student marks: %.2f\n", ST.marks);

fclose(st_info);

return 0;
}
