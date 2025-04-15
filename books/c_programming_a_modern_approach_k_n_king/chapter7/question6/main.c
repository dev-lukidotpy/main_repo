#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that prints the values of sizeof(int), sizeof(short),
    sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
    */

    printf("Size of a integer variable (in bytes): %llu\n", sizeof(int));
    printf("Size of a short integer variable (in bytes): %llu\n", sizeof(short));
    printf("Size of a long integer variable (in bytes): %llu\n", sizeof(long));
    printf("Size of a float variable (in bytes): %llu\n", sizeof(float));
    printf("Size of a double variable (in bytes): %llu\n", sizeof(double));
    printf("Size of a long double variable (in bytes): %llu\n", sizeof(long double));

    return 0;
}
