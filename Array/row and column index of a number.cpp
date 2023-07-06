#include <stdio.h>

void findIndex(int matrix[][100], int rows, int columns, int number) {
    int row = -1, column = -1;
\
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == number) {
                row = i;
                column = j;
                break;
            }
        }
    }
\
    if (row != -1 && column != -1) {
        printf("Number %d found at row %d and column %d.\n", number, row, column);
    } else {
        printf("Number %d not found in the matrix.\n", number);
    }
}

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int number;
    printf("Enter the number to search: ");
    scanf("%d", &number);

    findIndex(matrix, rows, columns, number);

    return 0;
}

