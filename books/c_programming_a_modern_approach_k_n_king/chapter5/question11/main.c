#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that asks the user for a two-digit number, then prints the English word for
    the number:

    Enter a two-digit number: 45
    You entered the number forty-five.

    Hint: Break the number into two digits. Use one switch statement to print the word for the
    first digit (“twenty,” “thirty,” and so forth). Use a second switch statement to print the
    word for the second digit. Don’t forget that the numbers between 11 and 19 require special
    treatment.
    */

    int whole_number, ten_digit, unit_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &whole_number);

    if (whole_number < 10 || 100 < whole_number)
        return 1;

    ten_digit = whole_number / 10;
    unit_digit = whole_number % 10;

    printf("You entered the number ");

    switch (whole_number) {
        case 11:
            printf("eleven.");
            return 0;
        case 12:
            printf("twelve.");
            return 0;
        case 13:
            printf("thirteen.");
            return 0;
        case 14:
            printf("fourteen.");
            return 0;
        case 15:
            printf("fifteen.");
            return 0;
        case 16:
            printf("sixteen.");
            return 0;
        case 17:
            printf("seventeen.");
            return 0;
        case 18:
            printf("eighteen.");
            return 0;
        case 19:
            printf("nineteen.");
            return 0;
    }

    switch (ten_digit) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }

    switch (unit_digit) {
        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
    }

    printf(".");

    return 0;
}
