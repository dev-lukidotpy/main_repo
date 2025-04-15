#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
    were repeated:

    Enter a number: 939577
    Repeated digit(s): 7 9
    */

    /* Checks numbers for repeated digits */

    bool digit_seen[10] = {false};
    int digit, smallest = 9, largest = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s): ");

    while (n > 0) {
        digit = n % 10;

        if (digit_seen[digit])
            printf("%d ", digit);

        if (digit < smallest)
            smallest = digit;

        if (digit > largest)
            largest = digit;

        digit_seen[digit] = true;

        n /= 10;
    }

    return 0;
}
