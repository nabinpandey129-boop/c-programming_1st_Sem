#include <stdio.h>

int main() {
    int i, k, n, num;
    char name[50];

    printf("--- Student Grading System ---\n");
    printf("Enter the number of students: ");
    scanf("%d", &n);
    

    for (i = 0; i < n; i++) {
        float total = 0; 
        float percentage = 0;
        


        printf("\n------------------------------\n");
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);

        printf("Enter number of subjects for %s: ", name);
        scanf("%d", &num);

        // Variable Length Array (VLA) - defined after 'num' is known
        int marks[num]; 

        for (k = 0; k < num; k++) {
            printf("  Enter marks for subject %d (out of 100): ", k + 1);
            scanf("%d", &marks[k]);
            total += marks[k];
        }

        // Percentage calculation: (Total / (Number of Subjects * 100)) * 100
        // This simplifies to: total / num
        percentage = total / num;

        printf("\n--- Results for %s ---\n", name);
        printf("Total Marks: %.2f\n", total);
        printf("Percentage:  %.2f%%\n", percentage);

        // Logic for Pass/Fail
        if (percentage >= 40.0) {
            printf("Status:      PASSED\n");
        } else {
            printf("Status:      FAILED\n");
        }
    }

    printf("\n------------------------------\n");
    printf("Process Complete. Press Enter to exit.\n");
    
    return 0;
}