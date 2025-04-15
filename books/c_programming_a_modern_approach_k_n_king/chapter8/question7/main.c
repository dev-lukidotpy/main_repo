#include <stdio.h>

#define SIZE 5

int main() {
    /*
    Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
    column sums:

    Enter row 1: 8 3 9 0 10
    Enter row 2: 3 5 17 1 1
    Enter row 3: 2 8 6 23 1
    Enter row 4: 15 7 3 2 9
    Enter row 5: 6 14 2 6 0

    Row totals: 30 27 40 36 28
    Column totals: 34 37 37 32 21
    */

    int five_matrix[SIZE][SIZE] = {{0}}, rows_sum[SIZE] = {0}, columns_sum[SIZE] = {0}, row_index, column_index;

    for (row_index = 0; row_index < SIZE; row_index++) {
        printf("Enter row %d: ", row_index + 1);

        for (column_index = 0; column_index < SIZE; column_index++) {
            scanf("%d", &five_matrix[row_index][column_index]);
        }
    }

    for (row_index = 0; row_index < SIZE; row_index++) {
        for (column_index = 0; column_index < SIZE; column_index++) {
            rows_sum[row_index] += five_matrix[row_index][column_index];
            columns_sum[column_index] += five_matrix[row_index][column_index];
        }
    }

    printf("\nRow totals: ");

    for (row_index = 0; row_index < SIZE; row_index++)
        printf("%d ", rows_sum[row_index]);

    printf("\nColumn totals: ");

    for (column_index = 0; column_index < SIZE; column_index++)
        printf("%d ", columns_sum[column_index]);

    return 0;
}
