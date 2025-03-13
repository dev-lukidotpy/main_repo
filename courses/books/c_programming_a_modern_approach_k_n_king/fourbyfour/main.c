#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
    displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
    and diagonals:

    Enter the numbers from 1 to 16 in any order:
    16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

    16  3  2 13
     5 10 11  8
     9  6  7 12
     4 15  14 1

    Row sums: 34 34 34 34
    Column sums: 34 34 34 34
    Diagonal sums: 34 34

    If the row, column, and diagonal sums are all the same (as they are in this example), the
    numbers are said to form a magic square. The magic square shown here appears in a 1514
    engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
    last row give the date of the engraving.)
    */

    int rows = 4, columns = 4;

    int matrix[rows][columns];
    int rows_sum[4] = {0, 0, 0, 0};
    int columns_sum[4] = {0, 0, 0, 0};
    int diagonals[2] = {0, 0};

    printf("Enter the number from 1 to 16 in any order:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            rows_sum[i] += matrix[i][j];

            columns_sum[i] += matrix[j][rows - 1 - i];

            if (j == columns - 1 - i) {
                diagonals[1] += matrix[i][columns - 1 - i];
            }

            if (i == j) {
                diagonals[0] += matrix[i][j];
            }
        }
    }

    printf("\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Row sums: %d %d %d %d\n", rows_sum[0], rows_sum[1], rows_sum[2], rows_sum[3]);
    printf("Column sums: %d %d %d %d\n", columns_sum[0], columns_sum[1], columns_sum[2], columns_sum[3]);
    printf("Diagonal sums: %d %d\n", diagonals[0], diagonals[1]);
}
