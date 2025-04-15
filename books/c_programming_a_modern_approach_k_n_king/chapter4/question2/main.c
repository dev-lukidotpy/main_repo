#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    2. Extend the program in Programming Project 1 to handle three-digit numbers.
    */

    int num, d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    d1 = num % 10;
    d2 = (num / 10) % 10;
    d3 = (num / 100);

    printf("The reversal is: %d%d%d", d1, d2, d3);

    return 0;
}
