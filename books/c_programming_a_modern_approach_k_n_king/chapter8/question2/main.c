#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
    many times each digit appears in the number:

    Enter a number: 41271092
    Digit: 0 1 2 3 4 5 6 7 8 9
    Occurrences: 1 2 2 0 1 0 0 1 0 1
    */

    long num = 0;
    int digit_occurrences[10] = {0}, digit, i;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0) {
        digit = num % 10;

        digit_occurrences[digit] += 1;

        num /= 10;
    }

    printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\n");
    printf("Occurrences:\t");

    for (i = 0; i < 10; i++)
        printf("%d ", digit_occurrences[i]);

    return 0;
}
