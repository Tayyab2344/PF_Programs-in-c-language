#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, digits = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
}

