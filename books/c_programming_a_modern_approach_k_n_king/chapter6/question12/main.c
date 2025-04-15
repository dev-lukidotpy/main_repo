#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than ε,
    where ε is a small (floating-point) number entered by the
    user.
    */

    float e = 1.0f, n;
    int terms, i = 1;

    scanf("%f", &n);

    while (1) {
        int factorial_i = i;

        for (int j = i - 1; j > 0; j--) {
            factorial_i *= j;
        }

        e += (1.0f/factorial_i);

        if ((1.0f/factorial_i) < n) {
            break;
        }

        terms = i;

        i++;
    }

    printf("Program stopped at %d° term, with 'e' = %.11f", terms, e);

    return 0;
}
