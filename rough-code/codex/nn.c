#include <stdio.h>
int main()
{
    int i, id;
    float marks, sum = 0, percentage;
    char name[23];
    char subject[5][20] = {"Math", "Science", "Nepali", "Computer", "English"};

    printf("Enter student roll no: ");
    scanf("%d", &id);

    printf("Enter the student name: ");
    scanf("%s", name);

    printf("\nEnter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks of %s: ", subject[i]);
        scanf("%f", &marks);

        if (marks >= 40)
            printf("Result: Pass\n");
        else
            printf("Result: Fail\n");

        sum = sum + marks;
    }

    printf("\nTotal Marks = %f", sum);

    percentage = (sum / 500) * 100;
    printf("\nPercentage = %f", percentage);

    if (percentage >= 80)
        printf("\nGrade = A");
    else if (percentage >= 60)
        printf("\nGrade = B");
    else if (percentage >= 40)
        printf("\nGrade = C");
    else
        printf("\nGrade = F");

    return 0;
}