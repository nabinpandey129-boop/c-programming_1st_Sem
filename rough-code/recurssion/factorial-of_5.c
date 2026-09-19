#include <stdio.h>      
int factorial(int n) {
    perintf("Calculating factorial of %d\n", n); // Print the current value of n
 if (n==0||n==1)
 {
    return 1;
 }
 
    return n * factorial(n - 1); // Recursive case
}
int main() {
    int result = factorial(5); // Calculate factorial of 5
    printf("Factorial of 5 is: %d\n", result);
    return 0;
}