#include <stdio.h>
int main() {
    int n;
    float budget;
    
    printf("Enter the available budget: ");
    scanf("%f", &budget);
    
    printf("Enter number of suppliers: ");
    scanf("%d", &n);
    
    char names[50][50];
    float prices[50];
    int reg[50];
    int docs[50];
    
    // Input supplier details
    for (int i = 0; i < n; i++) {
        printf("\nSupplier %d Name: ", i + 1);
        scanf("%s", names[i]);
        printf("Supplier Price: ");
        scanf("%f", &prices[i]);
        printf("Registration Status (1 = Yes, 0 = No): ");
        scanf("%d", &reg[i]);
        printf("Documents Complete (1 = Yes, 0 = No): ");
        scanf("%d", &docs[i]);
    }
    
    // Find the lowest price among qualified suppliers
    float lowest_price = -1;
    
    for (int i = 0; i < n; i++) {
        // Must meet all 3 qualification rules
        if (reg[i] == 1 && docs[i] == 1 && prices[i] <= budget) {
            if (lowest_price == -1 || prices[i] < lowest_price) {
                lowest_price = prices[i];
            }
        }
    }
    
    // Output results
    printf("\n--- EVALUATION RESULTS ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", names[i]);
        
        // Check if qualified
        if (reg[i] == 1 && docs[i] == 1 && prices[i] <= budget) {
            if (prices[i] == lowest_price) {
                printf("Result: Preferred Supplier\n");
            } else {
                printf("Result: Qualified\n");
            }
        } else {
            printf("Result: Disqualified\n");
        }
        printf("-------------------------\n");
    }
    
    return 0;
}