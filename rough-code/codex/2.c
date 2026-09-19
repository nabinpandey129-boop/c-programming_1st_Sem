#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5;
    float average;

    printf("Enter the five numbers:\n");
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);

    average = (a1 + a2 + a3 + a4 + a5) / 5.0;  // use 5.0 for float division

    printf("Average = %f\n", average);

    return 0;
}
