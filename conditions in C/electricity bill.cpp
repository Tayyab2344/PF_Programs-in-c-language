#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    int unitsConsumed;
    float totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 199) {
        totalAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        totalAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        totalAmount = unitsConsumed * 1.80;
    } else {
        totalAmount = unitsConsumed * 2.00;
    }

    if (totalAmount > 400) {
        totalAmount += totalAmount * 0.15;  // 15% surcharge
    }
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount to Pay: Rs. %.2f\n", totalAmount);
}

