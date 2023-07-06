#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;  
}

int binarySearch2D(int matrix[][100], int rows, int columns, int target) {
    int low = 0, high = rows * columns - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / columns;
        int col = mid % columns;

        if (matrix[row][col] == target)
            return mid;
        else if (matrix[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;  
}

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[100][100];

    printf("Enter elements of the matrix in sorted order:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int index = binarySearch2D(matrix, rows, columns, target);

    if (index != -1) {
        int row = index / columns;
        int col = index % columns;
        printf("Number %d found at row %d and column %d.\n", target, row, col);
    } else {
        printf("Number %d not found in the matrix.\n", target);
    }

    return 0;
}

