#include <stdio.h>
#include <string.h>
#include "employees.h"

void addEmployee(Employee employees[], int *count)
{
    if (*count < MAX_RECORDS) {
        printf("Enter Employee ID: ");
        scanf("%d", &employees[*count].id);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[*count].name);
        
        printf("Enter Department: ");
        scanf(" %[^\n]", employees[*count].department);
        
        printf("Enter Salary (N$): ");
        scanf("%lf", &employees[*count].salary);
        
        (*count)++;
        printf("Employee added successfully!\n");
    } else {
        printf("Maximum records reached.\n");
    }
}

void displayEmployees(const Employee employees[], int count)
{
    printf("\n--- EMPLOYEES ---\n");
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Department: %s | Salary: N$%.2f\n",
               employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

Employee* findEmployee(Employee employees[], int count, int id)
{
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            return &employees[i];
        }
    }
    return NULL;
}

void updateSalary(Employee *emp, double newSalary)
{
    emp->salary = newSalary;
}

void saveEmployees(const Employee employees[], int count, const char *filename)
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for saving.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(employees, sizeof(Employee), count, file);
    fclose(file);
    printf("Employees saved to file successfully!\n");
}

void loadEmployees(Employee employees[], int *count, const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("No saved file found.\n");
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(employees, sizeof(Employee), *count, file);
    fclose(file);
    printf("Employees loaded from file successfully!\n");
}