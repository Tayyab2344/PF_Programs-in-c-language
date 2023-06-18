#include <stdio.h>

int isPrime(int number, int divisor) {
    if (number <= 2)
        return (number == 2);

    if (number % divisor == 0)
        return 0;
    else if (divisor * divisor > number)
        return 1;
    else
        return isPrime(number, divisor + 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2)
        printf("Number is not prime.\n");
    else if (isPrime(number, 2))
        printf("Number is prime.\n");
    else
        printf("Number is not prime.\n");
}

