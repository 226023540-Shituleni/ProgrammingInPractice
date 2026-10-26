#include <stdio.h>
#include <string.h>
#include "suppliers.h"

void addSupplier(Supplier suppliers[], int *count)
{
    if (*count < MAX_RECORDS) {
        printf("Enter Supplier ID: ");
        scanf("%d", &suppliers[*count].id);
        
        printf("Enter Supplier Name: ");
        scanf(" %[^\n]", suppliers[*count].name);
        
        printf("Enter Email: ");
        scanf(" %[^\n]", suppliers[*count].email);
        
        printf("Enter Phone: ");
        scanf(" %[^\n]", suppliers[*count].phone);
        
        printf("Enter Town: ");
        scanf(" %[^\n]", suppliers[*count].town);
        
        (*count)++;
        printf("Supplier added successfully!\n");
    } else {
        printf("Maximum records reached.\n");
    }
}

void displaySuppliers(const Supplier suppliers[], int count)
{
    printf("\n--- MUNICIPAL SUPPLIERS ---\n");
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Email: %s | Phone: %s | Town: %s\n",
               suppliers[i].id, suppliers[i].name, suppliers[i].email, 
               suppliers[i].phone, suppliers[i].town);
    }
}