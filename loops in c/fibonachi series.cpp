#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    int num1 = 1, num2 = 1, nextTerm;

    printf("Fibonacci Series: %d %d ", num1, num2);

    for (int i = 3; i <= n; i++) {
        nextTerm = num1 + num2;
        printf("%d ", nextTerm);

        num1 = num2;
        num2 = nextTerm;
    }

    printf("\n");
}

