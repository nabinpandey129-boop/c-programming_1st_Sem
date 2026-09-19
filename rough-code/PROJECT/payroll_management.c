#include <stdio.h>

// 1. Move functions outside of main
float calculate_gross_salary(float basic_salary, float allowances) {
    return basic_salary + allowances;
}

float calculate_net_salary(float gross_salary, float deductions) {
    return gross_salary - deductions;
}

int main() {
    float basic_salary, allowances, deductions;

    // Input basic salary, allowances, and deductions
    printf("Enter Basic Salary: ");
    if (scanf("%f", &basic_salary) != 1) return 1; 

    printf("Enter Allowances: ");
    if (scanf("%f", &allowances) != 1) return 1;

    printf("Enter Deductions: ");
    if (scanf("%f", &deductions) != 1) return 1;

    // Calculate gross and net salary
    float gross_salary = calculate_gross_salary(basic_salary, allowances);
    float net_salary = calculate_net_salary(gross_salary, deductions);

    // Display the results
    printf("\n--- Salary Statement ---\n");
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Net Salary:   %.2f\n", net_salary);

    return 0;
}