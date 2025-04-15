#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    /*
    Write a program that reverses the words in a sentence:

    Enter a sentence: you can cage a swallow can't you?
    Reversal of sentence: you can't swallow a cage can you?

    Hint: Use a loop to read the characters one by one and store them in a one-dimensional char array.
    Have the loop stop at a period, question mark, or exclamation point (the “terminating character”), which is saved in a separate char variable.
    Then use a second loop to search backward through the array for the beginning of the last word.
    Print the last word, then search backward for the next-to-last word.
    Repeat until the beginning of the array is reached. Finally, print the terminating character.
    */

    char buffer[255] = {0};
    char terminating_character = 0, ch;
    int letter_counter = 2, sentence_len, word_start_index, word_end_index;

    buffer[0] = ' ';

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminating_character = ch;
            break;
        }

        buffer[letter_counter - 1] = ch;

        letter_counter++;
    }

    buffer[letter_counter] = '\0';

    word_end_index  = letter_counter - 1;
    word_start_index = letter_counter - 1;

    printf("Reversal of sentence: ");

    while (word_start_index >= 0) {
        ch = buffer[word_start_index];

        if (ch == ' ') {
            for (int i = word_start_index + 1; i <= word_end_index; i++)
                printf("%c", buffer[i]);

            if (word_start_index != 0)
                putchar(' ');

            word_end_index = word_start_index - 1;
        }

        word_start_index--;
    }

    printf("%c\n", terminating_character);

    return 0;
}
