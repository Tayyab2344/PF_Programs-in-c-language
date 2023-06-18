#include <stdio.h>

int main() {
    int decimalNumber;
    long long binaryNumber = 0;
    int remainder, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * i;
        decimalNumber /= 2;
        i *= 10;
    }

    printf("Binary number: %lld\n", binaryNumber);

}

