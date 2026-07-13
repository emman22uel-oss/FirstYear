#include <stdio.h>
#include <stdlib.h>

void displayMatrixWithAddresses(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int *ptr = (mat + (i * cols + j));
            printf("[%d] (Addr: %p) \t", *ptr, (void*)ptr);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Enter rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int *matrix = (int *)malloc(m * n * sizeof(int));
    int *transpose = (int *)malloc(n * m * sizeof(int));

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m * n; i++) {
        scanf("%d", (matrix + i));
    }

    printf("\n--- Original Matrix (m x n) ---\n");
    displayMatrixWithAddresses(matrix, m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(transpose + (j * m + i)) = *(matrix + (i * n + j));
        }
    }

    printf("\n--- Transposed Matrix (n x m) ---\n");
    displayMatrixWithAddresses(transpose, n, m);

    free(matrix);
    free(transpose);
    return 0;
}
