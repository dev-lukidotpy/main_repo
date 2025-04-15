#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    /*
    Write a program that takes a first name and last name entered by the user and displays the
    last name, a comma, and the first initial, followed by a period:

    Enter a first and last name: Lloyd Fosdick
    Fosdick, L.

    The user’s input may contain extra spaces before the first name, between the first and last
    names, and after the last name.
    */

    char fname[33], lname[33];

    printf("Enter a first and last name: ");
    scanf("%s %s", fname, lname);

    printf("%s, %c.", lname, fname[0]);

    return 0;
}
