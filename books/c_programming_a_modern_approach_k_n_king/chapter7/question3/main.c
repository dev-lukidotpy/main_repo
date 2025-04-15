#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Modify the sum2.c program of Section 7.1 to sum a series of double values.
    */

    float n, sum = 0;

    printf("This program sums a series of integers.\n");

    printf("Enter integers (0 to terminate): ");
    scanf("%f", &n);

    while (n != 0) {
        sum += n;
        scanf("%f", &n);
    }

    printf("The sum is: %.2f\n", sum);

    return 0;
}
