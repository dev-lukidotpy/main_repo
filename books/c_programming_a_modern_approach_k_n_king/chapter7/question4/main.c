#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 15

int main() {
    /*
    Write a program that translates an alphabetic phone number into numeric form:

    Enter phone number: CALLATT
    2255288

    (In case you don’t have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,
    4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
    nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

    Enter phone number: 1-800-COL-LECT
    1-800-265-5328
    You may assume that any letters entered by the user are upper case
    */

    int phone_number[MAX_LENGTH] = {0};
    int number_index = 0;
    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'C')
            phone_number[number_index] = 2;

        if (ch >= 'D' && ch <= 'F')
            phone_number[number_index] = 3;

        if (ch >= 'G' && ch <= 'I')
            phone_number[number_index] = 4;

        if (ch >= 'J' && ch <= 'L')
            phone_number[number_index] = 5;

        if (ch >= 'M' && ch <= 'O')
            phone_number[number_index] = 6;

        if (ch >= 'P' && ch <= 'S')
            phone_number[number_index] = 7;

        if (ch >= 'T' && ch <= 'V')
            phone_number[number_index] = 8;

        if (ch >= 'W' && ch <= 'Y')
            phone_number[number_index] = 9;

        if (ch < 'A' || ch > 'Z')
            // If it's a non-alphabetic character, print it as it is
            putchar(ch);

        number_index++;
    }

    printf("In numeric form: ");

    for (int i = 0; i < MAX_LENGTH; i++)
        printf("%d", phone_number[i]);

    printf("\n");

    return 0;
}
