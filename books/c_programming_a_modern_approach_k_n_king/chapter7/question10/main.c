#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    /*
    Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:

    Enter a sentence: And that's the way it is.
    Your sentence contains 6 vowels.
    */

    int vowels = 0;
    char parser;

    printf("Enter a sentence: ");

    while ((parser = getchar()) != '\n') {
        switch (toupper(parser)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels += 1;
                break;
        }
    }

    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}
