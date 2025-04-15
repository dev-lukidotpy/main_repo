#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    2. Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
    form:

    Enter a 24-hour time: 21:11
    Equivalent 12-hour time: 9:11 PM

    Be careful not to display 12:00 as 0:00.
    */

    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (minutes > 59) {
        printf("Invalid value for minutes");
        return 1;
    }

    if (hours > 12) {
        hours -= 12;
        printf("Equivalent 12-hour time: %d:%d PM", hours, minutes);
    } else {
        printf("Equivalent 12-hour time: %d:%d AM", hours, minutes);
    }

    return 0;
}
