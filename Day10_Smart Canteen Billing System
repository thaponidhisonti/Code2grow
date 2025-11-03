#include <stdio.h>

int main() {
    int totalCustomers, customerCount = 1;
    int totalRevenue = 0;

    printf("=========== Smart Canteen Billing System ===========\n");
    printf("Enter total number of customers: ");
    scanf("%d", &totalCustomers);

    while (customerCount <= totalCustomers) {
        int itemCount, itemCode, quantity;
        int itemTotal = 0, customerTotal = 0;
        float discount = 0.0;

        printf("\n--- Customer %d ---\n", customerCount);
        printf("Enter number of items: ");
        scanf("%d", &itemCount);

        printf("\nMenu:\n");
        printf("1. Sandwich - ₹80\n");
        printf("2. Burger - ₹120\n");
        printf("3. Pizza Slice - ₹150\n");
        printf("4. Coffee - ₹60\n");
        printf("5. Juice - ₹50\n");

        int itemLoop = 1;
        printf("\nCustomer %d Bill:\n", customerCount);

        while (itemLoop <= itemCount) {
            printf("Enter item code: ");
            scanf("%d", &itemCode);
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (itemCode == 1) {
                itemTotal = 80 * quantity;
                printf("Sandwich x %d = ₹%d\n", quantity, itemTotal);
            } else if (itemCode == 2) {
                itemTotal = 120 * quantity;
                printf("Burger x %d = ₹%d\n", quantity, itemTotal);
            } else if (itemCode == 3) {
                itemTotal = 150 * quantity;
                printf("Pizza Slice x %d = ₹%d\n", quantity, itemTotal);
            } else if (itemCode == 4) {
                itemTotal = 60 * quantity;
                printf("Coffee x %d = ₹%d\n", quantity, itemTotal);
            } else if (itemCode == 5) {
                itemTotal = 50 * quantity;
                printf("Juice x %d = ₹%d\n", quantity, itemTotal);
            } else {
                printf("Invalid item code.\n");
                itemTotal = 0;
            }

            customerTotal += itemTotal;
            itemLoop++;
        }

        printf("Total: ₹%d\n", customerTotal);

        if (customerTotal > 500) {
            discount = customerTotal * 0.10;
            printf("Discount (10%%): ₹%.0f\n", discount);
        }

        int finalBill = customerTotal - discount;
        printf("Final Bill: ₹%d\n", finalBill);

        totalRevenue += finalBill;
        customerCount++;
    }

    printf("\n================== Canteen Summary ==================\n");
    printf("Total Customers Served: %d\n", totalCustomers);
    printf("Total Revenue: ₹%d\n", totalRevenue);
    printf("=====================================================\n");

    return 0;
}
