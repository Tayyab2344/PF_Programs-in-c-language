#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num2 % num1 == 0) {
        printf("%d is a divisor of %d\n", num1, num2);
    } else {
        printf("%d is not a divisor of %d\n", num1, num2);
    }

}

