#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that calculates the average word length for a sentence:

    Enter a sentence: It was deja vu all over again.
    Average word length: 3.4

    For simplicity, your program should consider a punctuation mark to be part of the word to
    which it is attached. Display the average word length to one decimal place.
    */

    char reader;
    float media = 0.0f, letter_counter = 0.0f, word_counter = 1.0f;

    printf("Enter a sentence: ");

    while ((reader = getchar()) != '\n') {
        if (reader == ' ') {
            word_counter++;
            continue;
        }

        letter_counter++;
    }

    media = letter_counter / word_counter;

    printf("Average word length: %.1f", media);

    return 0;
}
