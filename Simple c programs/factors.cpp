#include <stdio.h>

void displayFactors(int number, int limit) {
    printf("Factors of %d are: ", number);

    for (int i = 1; i <= limit; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int number, limit;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the limit: ");
    scanf("%d", &limit);

    displayFactors(number, limit);
}

