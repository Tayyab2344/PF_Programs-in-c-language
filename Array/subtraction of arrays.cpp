#include <stdio.h>

void subtractMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[100][100], matrix2[100][100], result[100][100];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    subtractMatrices(matrix1, matrix2, result, rows, columns);

    printf("Resultant matrix after subtraction:\n");
    displayMatrix(result, rows, columns);

    return 0;
}

