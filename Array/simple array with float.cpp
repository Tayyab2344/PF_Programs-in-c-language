#include <stdio.h>

void displayArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main() {
    
    float numbers[] = {1.5, 2.7, 3.8, 4.2, 5.6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

   
    displayArray(numbers, size);

    return 0;
}

