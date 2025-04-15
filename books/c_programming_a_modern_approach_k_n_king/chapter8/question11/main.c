#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 15

int main() {
    /*
    Modify Programming Project 4 from Chapter 7 so that the program labels its output:

    Enter phone number: 1-800-COL-LECT
    In numeric form: 1-800-265-5328

    The program will need to store the phone number (either in its original form or in its
    numeric form) in an array of characters until it can be printed. You may assume that the
    phone number is no more than 15 characters long.
    */

    char phone_number[MAX_LENGTH] = {0};
    int number_index = 0;
    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'C')
            phone_number[number_index] = '2';

        if (ch >= 'D' && ch <= 'F')
            phone_number[number_index] = '3';

        if (ch >= 'G' && ch <= 'I')
            phone_number[number_index] = '4';

        if (ch >= 'J' && ch <= 'L')
            phone_number[number_index] = '5';

        if (ch >= 'M' && ch <= 'O')
            phone_number[number_index] = '6';

        if (ch >= 'P' && ch <= 'S')
            phone_number[number_index] = '7';

        if (ch >= 'T' && ch <= 'V')
            phone_number[number_index] = '8';

        if (ch >= 'W' && ch <= 'Y')
            phone_number[number_index] = '9';

        if (ch < 'A' || ch > 'Z')
            // If it's a non-alphabetic character, print it as it is
            phone_number[number_index] = ch;

        number_index++;
    }

    printf("In numeric form: ");

    for (int i = 0; i < MAX_LENGTH; i++)
        printf("%c", phone_number[i]);

    printf("\n");

    return 0;
}
