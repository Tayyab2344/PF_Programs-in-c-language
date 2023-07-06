#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    int numbers[5];
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int secondLargest = findSecondLargest(numbers, 5);
    printf("Second largest value: %d\n", secondLargest);

    return 0;
}

