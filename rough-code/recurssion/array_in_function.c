//pass array of 3 in functions and multiple the elements pf the array by 10 and print the result
#include <stdio.h>
void multiplyByTen(int arr[3]) {
    for (int i = 0; i < 3; i++) {
        arr[i] *= 10;
    }
}
int main() {
    int arr[3] = {1, 2, 3};
    multiplyByTen(arr);
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}