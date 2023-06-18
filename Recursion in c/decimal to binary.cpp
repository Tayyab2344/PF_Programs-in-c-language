#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Invalid input. Please enter a positive decimal number.\n");
    } else if (decimal == 0) {
        printf("Binary equivalent: 0\n");
    } else {
        printf("Binary equivalent: ");
        decimalToBinary(decimal);
        printf("\n");
    }
}

