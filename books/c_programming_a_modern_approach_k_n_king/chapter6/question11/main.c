#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    The value of the mathematical constant e can be expressed as an infinite series:

    e = 1 + 1/1! + 1/2! + 1/3! + …

    Write a program that approximates e by computing the value of

    1 + 1/1! + 1/2! + 1/3! + … + 1/n!

    where n is an integer entered by the user.
    */

    float e = 1.0f;
    int n;

    printf("Input the nth term to compute 'e': ");
    scanf("%d", &n);

    for  (int i = 1; i <= n; i++) {
        int factorial_i = i;

        for (int j = i - 1; j > 0; j--) {
            factorial_i *= j;
        }

        e += (1.0f/factorial_i);
    }

    printf("Aproximated 'e' value after %d terms = %f", n, e);

    return 0;
}
