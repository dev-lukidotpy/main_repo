#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Modify Programming Project 11 from Chapter 7 so that the program labels its output:

    Enter a first and last name: Lloyd Fosdick
    You entered the name: Fosdick, L.

    The program will need to store the last name (but not the first name) in an array of characters
    until it can be printed. You may assume that the last name is no more than 20 characters long.
    */

    char last_name[20] = {0};
    char fname_initial_letter, ch;
    int letter_counter = 1, is_last_name = 0, last_name_letter_counter = 1;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) != '\n') {
        if (letter_counter == 1)
            fname_initial_letter = ch;

        if (is_last_name) {
            last_name[last_name_letter_counter - 1] = ch;
            last_name_letter_counter++;
        }

        if (ch == ' ')
            is_last_name = 1;

        letter_counter++;
    }

    printf("You entered the name: ");

    for (int i = 0; i < last_name_letter_counter; i++)
        printf("%c", last_name[i]);

    printf(", ");
    printf("%c", fname_initial_letter);
    printf(".\n");

    return 0;
}
