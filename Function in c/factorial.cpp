#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    int i;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }
}

