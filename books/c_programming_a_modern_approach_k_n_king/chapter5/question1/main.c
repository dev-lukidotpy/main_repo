#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that calculates how many digits a number contains:

    Enter a number: 374
    The number 374 has 3 digits

    You may assume that the number has no more than four digits. Hint: Use if statements to
    test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.
    */
    int num, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (0 <= num && num < 10) {
        digits = 1;
    }

    if (10 <= num && num < 100) {
        digits = 2;
    }

    if (100 <= num && num < 1000) {
        digits = 3;
    }

    if (1000 <= num && num < 9999) {
        digits = 4;
    }

    printf("The number %d has %d digit(s)", num, digits);

    return 0;
}
