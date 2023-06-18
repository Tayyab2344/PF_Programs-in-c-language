#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, costPrice;
    int quantity = 15;

    
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &totalProfit);

   
    costPrice = (totalSellingPrice - totalProfit) / quantity;

    
    printf("Cost price of one item: %.2f\n", costPrice);

   
}

