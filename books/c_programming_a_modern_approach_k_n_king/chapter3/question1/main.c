#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:

    Enter a date (mm/dd/yyyy): 2/17/2011
    You entered the date 20110217
    */

    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%.2d%d\n", year, month, day);
}
