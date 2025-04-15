#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /*
    The square2.c program of Section 6.3 will fail (usually by printing strange answers)
    if i * i exceeds the maximum int value. Run the program and determine the smallest value
    of n that causes failure. Try changing the type of i to short and running the program
    again. (Don’t forget to update the conversion specifications in the call of printf!)
    Then try long. From these experiments, what can you conclude about the number of bits used to
    store integer types on your machine?
    */

    int n, odd, square;
    long i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;

    for (square = 1; i <= n; odd += 2) {
        printf("%10ld%10d\n", i, square);

        ++i;

        square += odd;
    }

    // I concluded that on my machine a 64-bit win 11 home, the short data type has a size of 2^16(2 bytes)
    // int type has 4 bytes and long type has 8 bits

    return 0;
}

