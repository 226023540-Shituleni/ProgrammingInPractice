#include <stdio.h>
#include <string.h>
#include "employees.h"
#include "config.h"

static char names[MAX_RECORDS][50];
static char emails[MAX_RECORDS][50];
static char phones[MAX_RECORDS][20];
static char towns[MAX_RECORDS][50];
static int count = 0;

void addEmployee(void)
{
    if (count < MAX_RECORDS) {
        char temp[50];
        
        printf("Enter supplier/employee name: ");
        scanf(" %[^\n]", temp);
        strcpy(names[count], temp);

        printf("Enter email: ");
        scanf(" %[^\n]", emails[count]);

        printf("Enter phone: ");
        scanf(" %[^\n]", phones[count]);

        printf("Enter town: ");
        scanf(" %[^\n]", towns[count]);

        count++;
        printf("Record added successfully!\n");
    } else {
        printf("Maximum %d records reached.\n", MAX_RECORDS);
    }
}

void listEmployees(void)
{
    printf("\n--- EMPLOYEE & SUPPLIER DETAILS ---\n");
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("\nRecord %d:\n", i + 1);
        printf("Name : %s\n", names[i]);
        printf("Email: %s\n", emails[i]);
        printf("Phone: %s\n", phones[i]);
        printf("Town : %s\n", towns[i]);
    }
}

double calculatePayrollTotal(void)
{
    return 0.0;
}