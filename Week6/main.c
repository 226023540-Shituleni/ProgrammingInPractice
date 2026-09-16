#include <stdio.h>
#include <string.h>

void manageSalaries() {
    float salaries[50];
    int n = 5; 
    
    printf("\n--- A. EMPLOYEE SALARIES ---\n");
    printf("Enter %d salaries:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\n--- All Salaries ---\n");
    for (int i = 0; i < n; i++) {
        printf("Salary %d: %.2f\n", i + 1, salaries[i]);
    }

    float sum = 0;
    float highest = salaries[0];
    float lowest = salaries[0];

    for (int i = 0; i < n; i++) {
        sum += salaries[i];
        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    printf("Average Salary : %.2f\n", sum / n);
    printf("Highest Salary : %.2f\n", highest);
    printf("Lowest Salary  : %.2f\n", lowest);

    float target;
    printf("\nEnter salary to search for: ");
    scanf("%f", &target);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (salaries[i] == target) {
            printf("Found! Salary %.2f is at index %d.\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Salary not found.\n");
    }
}

void manageBudgets() {
    float budgets[10];
    int n = 5; 

    printf("\n--- B. DEPARTMENT BUDGETS ---\n");
    printf("Enter %d department budgets:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Budget %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\n--- Department Budgets ---\n");
    for (int i = 0; i < n; i++) {
        printf("Budget %d: %.2f\n", i + 1, budgets[i]);
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        total += budgets[i];
    }
    printf("Total Budget   : %.2f\n", total);
    printf("Average Budget : %.2f\n", total / n);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                float temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\nBudgets Sorted (Lowest to Highest):\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", budgets[i]);
    }
    printf("\n");
}

void manageVehicles() {
    char registrations[20][20];
    int n = 3; 

    printf("\n--- C. VEHICLE REGISTRATION NUMBERS ---\n");
    printf("Enter %d registration numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Registration %d: ", i + 1);
        scanf("%s", registrations[i]);
    }

    printf("\n--- All Registration Numbers ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    char target[20];
    printf("\nEnter registration number to search for: ");
    scanf("%s", target);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(registrations[i], target) == 0) {
            printf("Found! Registration '%s' is at index %d.\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Registration number not found.\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n=============================\n");
        printf("     TENDER & DATA SYSTEM    \n");
        printf("=============================\n");
        printf("1. Employee Salaries\n");
        printf("2. Department Budgets\n");
        printf("3. Vehicle Registrations\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                manageSalaries();
                break;
            case 2:
                manageBudgets();
                break;
            case 3:
                manageVehicles();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}