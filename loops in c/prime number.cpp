#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Prime numbers from 1 to 300:\n");

    for (int number = 2; number <= 300; number++) {
        int isPrime = 1;

        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", number);
        }
    }

    printf("\n");

}

