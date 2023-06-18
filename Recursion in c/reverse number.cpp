#include <stdio.h>

int reverseNumber(int number, int reversedNumber) {
    if (number == 0)
        return reversedNumber;
    else
        return reverseNumber(number / 10, reversedNumber * 10 + number % 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number, 0);

    printf("Reversed number: %d\n", reversedNumber);
}

