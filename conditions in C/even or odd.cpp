#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");
}

