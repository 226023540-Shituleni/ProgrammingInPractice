#include <stdio.h>
#include <string.h>
#include "projects.h"

void addProject(Project projects[], int *count)
{
    if (*count < MAX_RECORDS) {
        printf("Enter Project ID: ");
        scanf("%d", &projects[*count].id);
        
        printf("Enter Project Title: ");
        scanf(" %[^\n]", projects[*count].title);
        
        printf("Enter Budget (N$): ");
        scanf("%lf", &projects[*count].budget);
        
        printf("Enter Start Date (Day Month Year): ");
        scanf("%d %d %d", &projects[*count].startDate.day, 
                          &projects[*count].startDate.month, 
                          &projects[*count].startDate.year);
                          
        printf("Enter End Date (Day Month Year): ");
        scanf("%d %d %d", &projects[*count].endDate.day, 
                          &projects[*count].endDate.month, 
                          &projects[*count].endDate.year);
        
        (*count)++;
        printf("Project added successfully!\n");
    } else {
        printf("Maximum records reached.\n");
    }
}

void displayProjects(const Project projects[], int count)
{
    printf("\n--- PROJECT RECORDS ---\n");
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Title: %s | Budget: N$%.2f | Start: %02d/%02d/%d | End: %02d/%02d/%d\n",
               projects[i].id, projects[i].title, projects[i].budget,
               projects[i].startDate.day, projects[i].startDate.month, projects[i].startDate.year,
               projects[i].endDate.day, projects[i].endDate.month, projects[i].endDate.year);
    }
}