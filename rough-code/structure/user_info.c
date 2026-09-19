#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user_info
{
    int id;
    char full_name[20];
    char gender;
};

struct user_info u[10];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the id: ");
        scanf("%d", &u[i].id);
        getchar();   // clear newline after id

        printf("Enter the full name: ");
        fgets(u[i].full_name, sizeof(u[i].full_name), stdin);

        printf("Enter the gender: ");
        scanf(" %c", &u[i].gender);   // no getchar here
    }

    printf("\nUser Information:\n");

    for (int i = 0; i < 2; i++)
    {
        printf("\nUser %d:\n", i + 1);
        printf("ID: %d\n", u[i].id);
        printf("Full Name: %s", u[i].full_name);
        printf("Gender: %c\n", u[i].gender);
    }

    return 0;
}