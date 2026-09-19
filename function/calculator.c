#include <stdio.h>
#include<stdlib.h>
#include <math.h> 


void add(int a, int b);
void subtract(int a, int b);
void divide(int a, int b);
void multiply(int a, int b);
void squareRoot(int a, int b);

int main() { 
    int a, b;
    int choice;

    printf("Enter first number: ");
    scanf("%d", &a);  
    printf("Enter second number: ");
    scanf("%d", &b);

    while (choice!=6) {
        printf("\n\n--- Basic Calculator ---");
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Square Root\n");
        printf("6. Exit");
        printf("\nSelect an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add(a, b); break;
            case 2: subtract(a, b); break;
            case 3: divide(a, b); break;
            case 4: multiply(a, b); break;
            case 5: squareRoot(a, b); break;
            case 6: exit;
            default:printf("Invalid choice!!!!"); 
        }
    }
    return 0;
}


void add(int a, int b) {
    printf("Addition is %d", a + b);
}

void subtract(int a, int b) {
    printf("Subtraction is %d", a - b);
}

void divide(int a, int b) {
    if (b != 0)
        printf("Division is %d", a / b);
    else
        printf("Error: Cannot divide by zero!");
}

void multiply(int a, int b) {
    printf("Multiplication is %d", a * b);
}

void squareRoot(int a, int b) { 
    
        printf("Square Root is %.2f\n", sqrt(a));
   printf("Square Root is %.2f", sqrt(b));
}