#include <stdio.h>

// 1. Define 'purchase' first so 'Customer' knows it exists
struct purchase {
    int qty;
    float amount;
};

struct Customer {
    int id;
    struct purchase p1[2]; // Array of 2 purchases
};

void calculate(struct Customer c1) {
    float total = 0;
    for (int i = 0; i < 2; i++) {
        total += c1.p1[i].qty * c1.p1[i].amount;
    }
    printf("Customer %d - Total amount: %.2f\n", c1.id, total);
}

int main() {
    struct Customer c1[2];

    for (int i = 0; i < 2; i++) {
        printf("\n--- Entering data for Customer %d ---\n", i + 1);
        printf("Enter customer id: ");
        scanf("%d", &c1[i].id);

        // Nested loop to fill the 2 purchases for this customer
        for (int j = 0; j < 2; j++) {
            printf("Purchase %d - Enter quantity: ", j + 1);
            scanf("%d", &c1[i].p1[j].qty); // Added [j] index
            printf("Purchase %d - Enter amount: ", j + 1);
            scanf("%f", &c1[i].p1[j].amount); // Added [j] index
        }
    }

    printf("\n--- Results ---\n");
    for (int i = 0; i < 2; i++) {
        calculate(c1[i]);
    }

    return 0;
}