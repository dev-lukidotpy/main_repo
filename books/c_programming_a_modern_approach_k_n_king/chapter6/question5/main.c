#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
    number with its digits reversed. Generalize the program so that the number can have one,
    two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
    stopping when it reaches 0.
    */

    int num, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");

    do {
        last = num % 10;
        num /= 10;

        printf("%d", last);
    } while (num > 0);

    return 0;
}
