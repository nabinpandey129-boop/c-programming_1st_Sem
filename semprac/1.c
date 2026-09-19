//(WAP) to calculate the electricity bill based on the slab table you provided.
#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    int service_charge = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 20) {
        bill = units * 5.0;
        service_charge = 75;
    }
    else if (units <= 30) {
        bill = (20 * 5.0) + (units - 20) * 6.5;
        service_charge = 100;
    }
    else if (units <= 50) {
        bill = (20 * 5.0) + (10 * 6.5) + (units - 30) * 8.0;
        service_charge = 100;
    }
    else if (units <= 100) {
        bill = (20 * 5.0) + (10 * 6.5) + (20 * 8.0) + (units - 50) * 9.5;
        service_charge = 125;
    }
    else if (units <= 150) {
        bill = (20 * 5.0) + (10 * 6.5) + (20 * 8.0) + (50 * 9.5) + (units - 100) * 9.5;
        service_charge = 150;
    }
    else {
        bill = (20 * 5.0) + (10 * 6.5) + (20 * 8.0) + (50 * 9.5) + (50 * 9.5) + (units - 150) * 11.0;
        service_charge = 200;
    }

    float total = bill + service_charge;

    printf("\nElectricity Bill Details:\n");
    printf("Units Consumed = %d\n", units);
    printf("Energy Charge = Rs %.2f\n", bill);
    printf("Service Charge = Rs %d\n", service_charge);
    printf("Total Bill = Rs %.2f\n", total);

    return 0;
}