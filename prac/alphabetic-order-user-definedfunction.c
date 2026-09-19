#include <stdio.h>
#include <string.h>

/* Structure */
struct student
{
    char name[20];
    int roll;
    float per;
};

/* Input function */
void input(struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter percentage: ");
        scanf("%f", &s[i].per);
    }
}

/* Display function */
void display(struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].per);
    }
}

/* Sorting function (by percentage) */
void sort_students(struct student s[], int n)
{
    struct student temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].per < s[j + 1].per)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

/* Main function */
int main()
{
    struct student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    input(s, n);

    printf("\nBefore sorting:\n");
    display(s, n);

    sort_students(s, n);

    printf("\nAfter sorting (by percentage):\n");
    display(s, n);

    return 0;
}