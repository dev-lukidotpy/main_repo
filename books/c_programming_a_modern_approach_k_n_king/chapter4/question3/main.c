#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    3. Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
    umber without using arithmetic to split the number into digits. Hint: See the upc.c program of Section 4.1.
    */

    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d", d3, d2, d1);

    return 0;
}
