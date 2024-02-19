#include <stdio.h>

#define ROWS 2
#define COLS 2

void multiplyArrays(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int result[ROWS][COLS]) {
    int i, j, k;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main() {
    int array1[ROWS][COLS] = {{1, 2},
                               {3, 4}};

    int array2[ROWS][COLS] = {{5, 6},
                               {7, 8}};

    int result[ROWS][COLS];

    multiplyArrays(array1, array2, result);

    printf("Result of multiplication:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
