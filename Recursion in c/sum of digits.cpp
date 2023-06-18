#include <stdio.h>

int sumDigits(int number) {
    if (number == 0)
        return 0;
    else
        return (number % 10) + sumDigits(number / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumDigits(number);

    printf("Sum of digits: %d\n", sum);
}

