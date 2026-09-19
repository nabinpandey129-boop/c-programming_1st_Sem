#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks[5];
    float average;
};

void entry(struct student s[], int n)
{
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("Enter name: ");
        fgets(s[i].name, 20, stdin);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        float sum = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            sum += s[i].marks[j];
        }

        s[i].average = sum / 5;
    }
}

void sort(struct student s[], int n)
{
    struct student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].average > s[j].average)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void writeFile(struct student s[], int n)
{
    FILE *fp = fopen("students.txt", "a");

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "Name: %s", s[i].name);
        fprintf(fp, "Roll: %d\n", s[i].roll);

        for (int j = 0; j < 5; j++)
        {
            fprintf(fp, "Subject %d: %.2f\n", j + 1, s[i].marks[j]);
        }

        fprintf(fp, "Average: %.2f\n\n", s[i].average);
    }

    fclose(fp);
}

void display(struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s", s[i].name);
        printf("Roll: %d\n", s[i].roll);

        for (int j = 0; j < 5; j++)
        {
            printf("Subject %d: %.2f\n", j + 1, s[i].marks[j]);
        }

        printf("Average: %.2f\n\n", s[i].average);
    }
}

int main()
{
    int n;
    struct student s[1000];
    printf("enter your choice: \n1. Entry\n2. Sort\n3. Write to file\n4. Display\n");
    int choice;
    printf("Choice: ");
    scanf("%d", &choice);
    while (1)
    {
         switch (choice)
    {
    case 1:
       entry(s, n); 
    
      break;
    case 2:
      sort(s, n);
      break;
    case 3:
      writeFile(s, n);
      break;
    case 4:
      display(s, n);
      break;
    
    default:
      break;
    }
    }
    return 0;
}