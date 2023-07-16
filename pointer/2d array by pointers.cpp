#include <stdio.h>

void printArray(int (*arr)[3], int rows) {
    printf("Array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printArray(array, 3);

    return 0;
}

