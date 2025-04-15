#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define NUM_CHARCODE 65 // It will turn 0 into 'A' for instance
#define ROOF_CHARCODE 90 // 65 + 26 letters in the alphabet
#define DIRECTIONS 4
#define UP board[current_x][current_y + 1]
#define RIGHT board[current_x + 1][current_y]
#define DOWN board[current_x][current_y - 1]
#define LEFT board[current_x - 1][current_y]

int main() {
    char board[SIZE][SIZE] = {{0}};
    int row_index, column_index, current_char, current_x, current_y, next_position, intended_x, intended_y;

    // Initialize the board with '.' characters
    for (row_index = 0; row_index < SIZE; row_index++) {
        for (column_index = 0; column_index < SIZE; column_index++) {
            board[row_index][column_index] = '.';
        }
    }

    srand(time(NULL));

    // Starter config
    current_char = NUM_CHARCODE;
    current_x = 0;
    current_y = 0;
    board[current_x][current_y] = (char) current_char;
    current_char++;

    do {
        // If all four directions are blocked, exit the loop
        if (UP != '.' && RIGHT != '.' && DOWN != '.' && LEFT != '.')
            break;

        // Save the current position before trying a move
        intended_x = current_x;
        intended_y = current_y;

        // Randomly choose a direction to move
        next_position = rand() % DIRECTIONS;

        // Try moving in the chosen direction
        switch (next_position) {
            case 0: // UP
                intended_y++;
                break;
            case 1: // RIGHT
                intended_x++;
                break;
            case 2: // DOWN
                intended_y--;
                break;
            case 3: // LEFT
                intended_x--;
                break;
            default:
                printf("Error: Invalid direction");
                exit(1);
        }

        // Check if the new position is valid (inside the board and not already visited)
        if ((intended_x >= 0) && (intended_x < SIZE) && (intended_y >= 0) && (intended_y < SIZE)) {
            if (board[intended_x][intended_y] == '.') {
                board[intended_x][intended_y] = (char) current_char;

                current_x = intended_x;
                current_y = intended_y;

                current_char++;
            }
        }

        // If move is invalid, the position doesn't change; the loop will retry with a new direction
    } while (current_char <= ROOF_CHARCODE);

    // Print the board
    for (row_index = 0; row_index < SIZE; row_index++) {
        for (column_index = 0; column_index < SIZE; column_index++) {
            printf("%c ", board[row_index][column_index]);
        }
        printf("\n");
    }

    return 0;
}
