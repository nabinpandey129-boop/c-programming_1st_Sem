#include <stdio.h>

int main() {
    char operator, choice;
    double num, result;

    do {
        printf("\nEnter expression (end with =):\n");

        // Read first number
        scanf("%lf", &result);

        while (1) {
            // Read operator
            scanf(" %c", &operator);

            // Stop current calculation
            if (operator == '=') {
                printf("Result = %.2lf\n", result);
                break;
            }

            // Read next number
            scanf("%lf", &num);
        

            switch (operator) {
                case '+':
                    result += num;
                    break;
                case '-':
                    result -= num;
                    break;
                case '*':
                    result *= num;
                    break;
                case '/':
                    if (num == 0) {
                        printf("Error: Division by zero!\n");
                        return 1;
                    }
                    result /= num;
                    break;
                default:
                    printf("Invalid operator!\n");
                    return 1;
            }
        }

        // Ask user if they want another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended.\n");
    return 0;
}
