#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
    terms:

    Enter a fraction: 6/12
    In lowest terms: 1/2

    Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
    denominator. Then divide both the numerator and denominator by the GCD.
    */

    int numerator, denominator, temp, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    m = numerator;
    n = denominator;

    while (n > 0) {
        temp = n;

        n = m % n;
        m = temp;
    }

    numerator /= m;
    denominator /= m;

    printf("In lowest terms: %d/%d", numerator, denominator);

    return 0;
}
