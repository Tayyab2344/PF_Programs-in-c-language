#include <stdio.h>

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the size of the square matrices: ");
    scanf("%d", &n);

    int matrix1[100][100], matrix2[100][100], result[100][100];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiplyMatrices(matrix1, matrix2, result, n);

    printf("Resultant matrix after multiplication:\n");
    displayMatrix(result, n);

    return 0;
}

