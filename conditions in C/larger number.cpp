#include <stdio.h>

int main() {
    int num1, num2, larger;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    larger = (num1 > num2) ? num1 : num2;

    printf("The larger number is: %d\n", larger);

}

