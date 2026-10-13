#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    char emails[5][50];
    char phones[5][20];
    char towns[5][50];
    
    int count = 0;
    int choice;

    do {
        printf("\n================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Construct Description\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 5) {
                char temp[50];
                
                printf("Enter supplier name: ");
                scanf(" %[^\n]", temp);
                strcpy(names[count], temp);

                printf("Enter email: ");
                scanf(" %[^\n]", emails[count]);

                printf("Enter phone: ");
                scanf(" %[^\n]", phones[count]);

                printf("Enter town: ");
                scanf(" %[^\n]", towns[count]);

                count++;
            } else {
                printf("Maximum 5 suppliers reached.\n");
            }
        }
        else if (choice == 2) {
            printf("\n--- SUPPLIER DETAILS ---\n");
            for (int i = 0; i < count; i++) {
                printf("\nSupplier %d:\n", i + 1);
                printf("Name : %s\n", names[i]);
                printf("Email: %s\n", emails[i]);
                printf("Phone: %s\n", phones[i]);
                printf("Town : %s\n", towns[i]);
            }
        }
        else if (choice == 3) {
            char search_name[50];
            printf("Enter supplier name to search: ");
            scanf(" %[^\n]", search_name);

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(names[i], search_name) == 0) {
                    printf("Supplier found.\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Supplier not found.\n");
            }
        }
        else if (choice == 4) {
            printf("\n--- SUPPLIER NAME LENGTHS ---\n");
            for (int i = 0; i < count; i++) {
                printf("Supplier name length: %lu\n", strlen(names[i]));
                printf("Email length: %lu\n", strlen(emails[i]));
                printf("Town length: %lu\n", strlen(towns[i]));
            }
        }
        else if (choice == 5) {
            printf("\n--- CONSTRUCTED DESCRIPTION ---\n");
            for (int i = 0; i < count; i++) {
                char sentence[150] = "";
                strcat(sentence, names[i]);
                strcat(sentence, " operates in ");
                strcat(sentence, towns[i]);
                strcat(sentence, ".");
                
                printf("%s\n", sentence);
            }
        }

    } while (choice != 6);

    return 0;
}