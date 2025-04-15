#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
     Write a program that prints an n × n magic square (a square arrangement of the numbers
    1, 2, …, n2

    in which the sums of the rows, columns, and diagonals are all the same). The
    user will specify the value of n:
    This program creates a magic square of a specified size.
    The size must be an odd number between 1 and 99.

    Enter size of magic square: 5
    17 24  1  8 15
    23  5  7 14 16
     4  6 13 20 22
    10 12 19 21  3
    11 18 25  2  9

    Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, …, n2
    by moving up one row and
    over one column. Any attempt to go outside the bounds of the array should “wrap around”
    to the opposite side of the array. For example, instead of storing the next number in row –1,
    we would store it in row n – 1 (the last row). Instead of storing the next number in column n,
    we would store it in column 0. If a particular array element is already occupied, put the
    number directly below the previously stored number. If your compiler supports variablelength arrays, declare the array to have n rows and n columns.
    If not, declare the array to have 99 rows and 99 columns.
    */

    int size;

    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int magic_square_grid[99][99] = {{0}};
    int roof_number = (size * size);

    if (size <= 1 || size >= 99 || size % 2 == 0)
        exit(1);

    int current_row = 0,
    current_column = (size / 2),
    desired_row = current_row,
    desired_column = current_column,
    current_number = 1;

    magic_square_grid[current_row][current_column] = current_number;
    current_number++;

    printf("\n");

    while (current_number <= roof_number) {
        desired_row--;
        desired_column++;

        if (desired_row < 0 || desired_column > (size - 1)) {
            if (desired_row < 0)
                desired_row = size - 1;

            if (desired_column > (size - 1))
                desired_column = 0;
        }

        if (magic_square_grid[desired_row][desired_column] == 0) {
            magic_square_grid[desired_row][desired_column] = current_number;
        } else {
            desired_row = current_row;
            desired_column = current_column;

            desired_row++;

            magic_square_grid[desired_row][desired_column] = current_number;
        }

        current_number++;

        current_row = desired_row;
        current_column = desired_column;
    }

    for (int row_index = 0; row_index < size; row_index++) {
        for (int column_index = 0; column_index < size; column_index++) {
            printf("%3d", magic_square_grid[row_index][column_index]);
        }

        printf("\n");
    }

    return 0;
}
