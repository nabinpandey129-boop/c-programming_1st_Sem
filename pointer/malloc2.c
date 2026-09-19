#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    float average = 0;
    float *array;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array = (float *)malloc(n * sizeof(float));

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    printf("The elements are: ");
    for(i = 0; i < n; i++)
    {
        average += array[i];
        printf("%.2f ", array[i]);
    }

    average = average / n;

    printf("\nAverage: %.2f", average);

    free(array);

    return 0;
}