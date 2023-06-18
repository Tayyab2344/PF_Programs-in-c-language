#include <stdio.h>

int main() {
    int number;
    int largest, smallest, sum = 0;
    float average;

    printf("Enter number 1: ");
    scanf("%d", &number);

    largest = smallest = sum = number;

    for (int i = 2; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }

        sum += number;
    }

    average = (float)sum / 10;

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %.2f\n", average);
}

