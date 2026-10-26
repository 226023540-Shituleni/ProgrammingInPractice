#include <stdio.h>
#include "records.h"
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"
#include "projects.h"

int main()
{
    Employee employees[MAX_RECORDS];
    Budget budgets[MAX_RECORDS];
    Supplier suppliers[MAX_RECORDS];
    Asset assets[MAX_RECORDS];
    Project projects[MAX_RECORDS];

    int empCount = 0;
    int budgetCount = 0;
    int supCount = 0;
    int assetCount = 0;
    int projCount = 0;

    int choice;

    do {
        printf("\n========================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
        printf("========================================\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Add Budget\n");
        printf("4. Display Budgets\n");
        printf("5. Add Supplier\n");
        printf("6. Display Suppliers\n");
        printf("7. Add Asset\n");
        printf("8. Display Assets\n");
        printf("9. Add Project\n");
        printf("10. Display Projects\n");
        printf("11. Update Employee Salary\n");
        printf("12. Save Employees to File\n");
        printf("13. Load Employees from File\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addEmployee(employees, &empCount);
                break;
            case 2:
                displayEmployees(employees, empCount);
                break;
            case 3:
                addBudget(budgets, &budgetCount);
                break;
            case 4:
                displayBudgets(budgets, budgetCount);
                break;
            case 5:
                addSupplier(suppliers, &supCount);
                break;
            case 6:
                displaySuppliers(suppliers, supCount);
                break;
            case 7:
                addAsset(assets, &assetCount);
                break;
            case 8:
                displayAssets(assets, assetCount);
                break;
            case 9:
                addProject(projects, &projCount);
                break;
            case 10:
                displayProjects(projects, projCount);
                break;
            case 11: {
                int searchId;
                double newSal;
                printf("Enter Employee ID to update: ");
                scanf("%d", &searchId);
                Employee *found = findEmployee(employees, empCount, searchId);
                if (found != NULL) {
                    printf("Current Salary for %s: N$%.2f\n", found->name, found->salary);
                    printf("Enter new salary: ");
                    scanf("%lf", &newSal);
                    updateSalary(found, newSal);
                    printf("Salary updated successfully!\n");
                } else {
                    printf("Employee not found.\n");
                }
                break;
            }
            case 12:
                saveEmployees(employees, empCount, "employees.dat");
                break;
            case 13:
                loadEmployees(employees, &empCount, "employees.dat");
                break;
            case 0:
                printf("Exiting system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}