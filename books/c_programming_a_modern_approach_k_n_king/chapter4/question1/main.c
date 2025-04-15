#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that asks the user to enter a two-digit number, then prints the number with
    its digits reversed. A session with the program should have the following appearance:

    Enter a two-digit number: 28
    The reversal is: 82

    Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
    is the last digit in n and n / 10 is n with the last digit removed.
    */

    int num, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    d1 = num % 10;
    d2 = num / 10;

    printf("The reversal is: %d%d", d1, d2);

    return 0;
}
