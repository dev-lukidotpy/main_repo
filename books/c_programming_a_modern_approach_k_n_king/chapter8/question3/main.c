#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
    number to be tested for repeated digits. The program should terminate when the user enters
    a number that’s less than or equal to 0.
    */

    bool digit_seen[10] = {false};
    int digit, i;
    long number, aux;

    printf("Type 0 to exit\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%ld", &number);

        aux = number;

        if (!number)
            break;

        while (number > 0) {
            digit = number % 10;

            if (digit_seen[digit])
                break;

            digit_seen[digit] = true;

            number /= 10;
        }

        if (number > 0)
            printf("O numéro %ld possui repetições!\n", aux);
        else
            printf("O número %ld não possui repetições!\n", aux);

        for (i = 0; i < 10; i++)
            digit_seen[i] = false;
    }

    return 0;
}
