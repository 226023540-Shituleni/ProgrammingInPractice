#include <stdio.h>
#include <string.h>
#include "assets.h"

void addAsset(Asset assets[], int *count)
{
    if (*count < MAX_RECORDS) {
        printf("Enter Asset ID: ");
        scanf("%d", &assets[*count].id);
        
        printf("Enter Description: ");
        scanf(" %[^\n]", assets[*count].description);
        
        printf("Enter Value (N$): ");
        scanf("%lf", &assets[*count].value);
        
        printf("Enter Acquired Date (Day Month Year): ");
        scanf("%d %d %d", &assets[*count].acquired.day, 
                          &assets[*count].acquired.month, 
                          &assets[*count].acquired.year);
        
        (*count)++;
        printf("Asset added successfully!\n");
    } else {
        printf("Maximum records reached.\n");
    }
}

void displayAssets(const Asset assets[], int count)
{
    printf("\n--- ASSET RECORDS ---\n");
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Description: %s | Value: N$%.2f | Acquired: %02d/%02d/%d\n",
               assets[i].id, assets[i].description, assets[i].value,
               assets[i].acquired.day, assets[i].acquired.month, assets[i].acquired.year);
    }
}