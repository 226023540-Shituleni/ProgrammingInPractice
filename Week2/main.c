#include <stdio.h>

int main() {
    double total_revenue;
    double total_expenses;
    double balance;

    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n\n");

    printf("Enter Total Revenue: $");
    scanf("%lf", &total_revenue);

    printf("Enter Total Expenses: $");
    scanf("%lf", &total_expenses);

    printf("\nEnter number of Departments: ");
    scanf("%d", &departments);

    printf("Enter Payroll Expenditure: $");
    scanf("%lf", &payroll);

    printf("Enter Procurement Costs: $");
    scanf("%lf", &procurement);

    printf("Enter Value of Municipal Assets: $");
    scanf("%lf", &assets);

    balance = total_revenue - total_expenses;

    printf("\nMUNICIPAL FINANCIAL SUMMARY\n");
    printf("Departments Serviced: %d\n", departments);
    printf("Total Assets Value: $%.2f\n", assets);
    printf("Total Revenue: $%.2f\n", total_revenue);
    printf("Total Expenses: $%.2f\n", total_expenses);
    printf("Payroll: $%.2f\n", payroll);
    printf("Procurement: $%.2f\n", procurement);
    printf("Net Balance: $%.2f\n", balance);

    return 0;
}