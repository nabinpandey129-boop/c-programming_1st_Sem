#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to group related vehicle data 
struct Vehicle {
    char plateNum[20];
    char type[10];
    int slotNum;
    float entryTime; // Represented in hours (e.g., 14.5 for 2:30 PM)
};

// Function prototypes for modularity [cite: 85]
void addVehicle();
void displayAll();
void searchVehicle();
void processExit();

int main() {
    int choice;

    // Menu-driven system using a while loop [cite: 84]
    while (1) {
        printf("\n--- PARKING LOT MANAGEMENT SYSTEM ---");
        printf("\n1. Vehicle Entry");
        printf("\n2. Display All Parked Vehicles");
        printf("\n3. Search Vehicle");
        printf("\n4. Vehicle Exit (Billing)");
        printf("\n5. Exit Program");
        printf("\nSelect an option: ");
        scanf("%d", &choice);

        // Switch-case for menu navigation 
        switch (choice) {
            case 1: addVehicle(); break;
            case 2: displayAll(); break;
            case 3: searchVehicle(); break;
            case 4: processExit(); break;
            case 5: exit(0);
            default: printf("\nInvalid selection! Please try again.");
        }
    }
    return 0;
}

// Function to add records and save to file [cite: 70, 87]
void addVehicle() {
    FILE *fp = fopen("parking_records.dat", "ab"); // Binary append mode
    struct Vehicle v;

    printf("\nEnter License Plate: ");
    scanf("%s", v.plateNum);
    printf("Enter Vehicle Type (Car/Bike): ");
    scanf("%s", v.type);
    printf("Assign Slot Number: ");
    scanf("%d", &v.slotNum);
    printf("Enter Entry Time (24hr format, e.g., 10.5): ");
    scanf("%f", &v.entryTime);

    fwrite(&v, sizeof(struct Vehicle), 1, fp);
    fclose(fp);
    printf("\nVehicle added successfully!");
}

// Function to display records using file reading [cite: 71, 87]
void displayAll() {
    FILE *fp = fopen("parking_records.dat", "rb");
    struct Vehicle v;

    if (fp == NULL) {
        printf("\nNo records found.");
        return;
    }

    printf("\n%-15s %-10s %-10s %-10s", "Plate No", "Type", "Slot", "In-Time");
    // Loop to read until end of file [cite: 84]
    while (fread(&v, sizeof(struct Vehicle), 1, fp)) {
        printf("\n%-15s %-10s %-10d %-10.2f", v.plateNum, v.type, v.slotNum, v.entryTime);
    }
    fclose(fp);
}

// Function using pointers and search logic [cite: 72]
void searchVehicle() {
    FILE *fp = fopen("parking_records.dat", "rb");
    struct Vehicle v;
    char searchPlate[20];
    int found = 0;

    printf("\nEnter Plate Number to search: ");
    scanf("%s", searchPlate);

    while (fread(&v, sizeof(struct Vehicle), 1, fp)) {
        if (strcmp(v.plateNum, searchPlate) == 0) {
            printf("\nVehicle Found in Slot: %d", v.slotNum);
            found = 1;
            break;
        }
    }
    if (!found) printf("\nRecord not found.");
    fclose(fp);
}

// Function to handle vehicle exit and billing [cite: 74, 75]
void processExit() {
    FILE *fp = fopen("parking_records.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Vehicle v;
    char exitPlate[20];
    float exitTime, duration, fee;
    int found = 0;

    printf("\nEnter Plate Number exiting: ");
    scanf("%s", exitPlate);
    printf("Enter Exit Time (24hr format): ");
    scanf("%f", &exitTime);

    while (fread(&v, sizeof(struct Vehicle), 1, fp)) {
        if (strcmp(v.plateNum, exitPlate) == 0) {
            duration = exitTime - v.entryTime;
            fee = duration * 20.0; // Flat rate of 20 per hour
            printf("\n--- Receipt ---");
            printf("\nVehicle: %s", v.plateNum);
            printf("\nDuration: %.2f hours", duration);
            printf("\nTotal Fee: $%.2f", fee);
            found = 1;
        } else {
            fwrite(&v, sizeof(struct Vehicle), 1, temp);
        }
    }
    fclose(fp);
    fclose(temp);

    remove("parking_records.dat");
    rename("temp.dat", "parking_records.dat");

    if (!found) printf("\nVehicle not found in system."); 
}