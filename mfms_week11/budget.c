#include <stdio.h>
#include <string.h>
#include "budget.h"

void addBudget(Budget budgets[], int *count)
{
    if (*count < MAX_RECORDS) {
        printf("Enter Department: ");
        scanf(" %[^\n]", budgets[*count].department);
        
        printf("Enter Allocated Amount (N$): ");
        scanf("%lf", &budgets[*count].allocated);
        
        printf("Enter Spent Amount (N$): ");
        scanf("%lf", &budgets[*count].spent);
        
        (*count)++;
        printf("Budget added successfully!\n");
    } else {
        printf("Maximum records reached.\n");
    }
}

void displayBudgets(const Budget budgets[], int count)
{
    printf("\n--- BUDGET RECORDS ---\n");
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        double balance = budgets[i].allocated - budgets[i].spent;
        printf("Dept: %s | Allocated: N$%.2f | Spent: N$%.2f | Balance: N$%.2f\n",
               budgets[i].department, budgets[i].allocated, budgets[i].spent, balance);
    }
}