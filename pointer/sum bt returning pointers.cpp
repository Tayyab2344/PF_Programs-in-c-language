#include <stdio.h>

int* sum(int a, int b) {
    int result = a + b;
    int *ptr = &result;
    return ptr;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int *sumPtr = sum(num1, num2);
    printf("Sum: %d\n", *sumPtr);

    return 0;
}

