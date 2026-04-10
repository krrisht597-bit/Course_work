#include <stdio.h>

int main() {
// ---------------------------------------------
// FOOD BILLING SYSTEM 
// ---------------------------------------------
  
    int choice, quantity;
    char more;

    int prices[] = {0, 180, 100, 120, 50}; 
    char *items[] = {"", "Pizza", "Burger", "Dosa", "Idli"};

    int totalBill = 0;   

    // OUTER LOOP
    do {

        printf("\n----------------- MENU -----------------\n");
        printf("1. Pizza  - Rs.180\n");
        printf("2. Burger - Rs.100\n");
        printf("3. Dosa   - Rs.120\n");
        printf("4. Idli   - Rs.50\n");
        printf("----------------------------------------\n");

        printf("\nEnter the item number you want to order: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("? Invalid Choice!\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0) {
            printf("? Quantity must be greater than zero!\n");
            continue;
        }

        int cost = prices[choice] * quantity;
        totalBill += cost;

        printf("? Added: %s x %d = Rs.%d\n", items[choice], quantity, cost);
        printf("?? Current Total Bill: Rs.%d\n", totalBill);

        // INNER LOOP (y/n validation)
        do {
            printf("\nDo you want to order more? (y/n): ");
            scanf(" %c", &more);

            if (more != 'y' && more != 'Y' && more != 'n' && more != 'N') {
                printf("? Invalid input! Enter y or n only.\n");
            }

        } while (more != 'y' && more != 'Y' && more != 'n' && more != 'N');

    } while (more == 'y' || more == 'Y');

    // FINAL BILL (outside loop)
    printf("\n============================================\n");
    printf("              FINAL BILL\n");
    printf("============================================\n");
    printf("Total Amount to Pay: Rs.%d\n", totalBill);
    printf("--------------------------------------------\n");
    printf("        THANK YOU! VISIT AGAIN ??\n");
    printf("============================================\n");


    return 0;
}
