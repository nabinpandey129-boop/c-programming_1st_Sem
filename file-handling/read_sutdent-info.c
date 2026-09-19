#include  <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student st;
    FILE *st_info;
    st_info = fopen("student_info.txt", "r");
  
    fscanf(st_info, "Student id: %d\n", &st.roll);
    fscanf(st_info, "Student name: %s\n", st.name);
    fscanf(st_info, "Student marks: %f\n", &st.marks);

    printf("Student id: %d\n", st.roll);
    printf("Student name: %s\n", st.name);
    printf("Student marks: %.2f\n", st.marks);

    fclose(st_info);

    return 0;
}