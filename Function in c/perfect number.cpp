#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    int divisor;
    
    for (divisor = 1; divisor <= num / 2; divisor++) {
        if (num % divisor == 0) {
            sum += divisor;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

void printPerfectNumbers(int lowerLimit, int upperLimit) {
    int number;

    printf("Perfect numbers between %d and %d:\n", lowerLimit, upperLimit);

    for (number = lowerLimit; number <= upperLimit; number++) {
        if (isPerfect(number)) {
            printf("%d\n", number);
        }
    }
}

int main() {
    int lowerLimit, upperLimit;

    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    printPerfectNumbers(lowerLimit, upperLimit);

}

