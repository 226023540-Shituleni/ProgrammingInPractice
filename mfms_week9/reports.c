#include <stdio.h>
#include "reports.h"
#include "config.h"

void employeeReport(void)
{
    float salary; 
    float total = 0; 
    float highest = 0; 
    float lowest = 0; 
    float average; 

    printf("\n--- SALARY REPORT ---\n");
    for (int i = 1; i <= MAX_RECORDS; i++) { 
        printf("Enter salary for employee %d: ", i); 
        scanf("%f", &salary); 

        total = total + salary; 

        if (i == 1) { 
            highest = salary; 
            lowest = salary; 
        } 

        if (salary > highest) { 
            highest = salary; 
        } 

        if (salary < lowest) { 
            lowest = salary; 
        } 
    } 

    average = total / MAX_RECORDS; 

    printf("\n--- Salary Summary ---\n"); 
    printf("Total salary payout: %.2f\n", total);
    printf("Average salary: %.2f\n", average); 
    printf("Highest salary: %.2f\n", highest); 
    printf("Lowest salary: %.2f\n", lowest);
}

void budgetReport(void)
{
    float budgets[MAX_RECORDS];
    int n = MAX_RECORDS; 

    printf("\n--- DEPARTMENT BUDGETS REPORT ---\n");
    printf("Enter %d department budgets:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Budget %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        total += budgets[i];
    }
    
    printf("\n--- Budget Summary ---\n");
    printf("Total Budget   : %.2f\n", total);
    printf("Average Budget : %.2f\n", total / n);
}