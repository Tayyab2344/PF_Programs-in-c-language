#include <stdio.h>

void countOccurrences(int arr[], int size) {
    printf("Number of occurrences of each number in the array:\n");
    for (int i = 0; i < size; i++) {
        int count = 1;
        if (arr[i] == -1) {
            continue; // Skip already counted elements
        }
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }
        printf("%d occurs %d time(s)\n", arr[i], count);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    countOccurrences(arr, size);

    return 0;
}

