#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i, n;

    // 🔹 malloc()
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d elements (malloc):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements using malloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 🔹 realloc()
    printf("\n\nEnter new size: ");
    scanf("%d", &n);

    arr = (int*) realloc(arr, n * sizeof(int));

    printf("Enter %d elements after realloc:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements after realloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 🔹 free()
    free(arr);

    // 🔹 calloc()
    int *arr2;
    printf("\n\nUsing calloc:\n");

    arr2 = (int*) calloc(n, sizeof(int));

    printf("Elements of calloc (initialized to 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    free(arr2);

    return 0;
}