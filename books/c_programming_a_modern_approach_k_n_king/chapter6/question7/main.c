#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that prompts the user to enter a number n, then prints all even squares
    between 1 and n. For example, if the user enters 100, the program should print the following:

    4
    16
    36
    64
    100
    */

    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 2; (i * i) <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
