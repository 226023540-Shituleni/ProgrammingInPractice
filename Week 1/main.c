#include <stdio.h>

int main() {
    char municipalityName[100];
    char mayorsName[100];
    int population;

    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf(" %[^\n]", municipalityName);

    printf("Enter Mayor's Name: ");
    scanf(" %[^\n]", mayorsName);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\nMUNICIPAL INFORMATION REPORT\n");
    printf("Municipality Name: %s\n", municipalityName);
    printf("Mayor's Name: %s\n", mayorsName);
    printf("Population: %d\n", population);

    return 0;
}