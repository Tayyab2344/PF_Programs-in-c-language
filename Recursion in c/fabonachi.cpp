#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int terms) {
    int i;

    printf("Fibonacci Series: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms should be positive.\n");
    } else {
        printFibonacciSeries(terms);
    }
}

