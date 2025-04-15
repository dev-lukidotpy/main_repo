#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that asks the user for a 12-hour time, then displays the time in 24-hour
    form:

    Enter a 12-hour time: 9:11 PM
    Equivalent 24-hour time: 21:11

    See Programming Project 8 for a description of the input format.
    */
    int hour, minutes, equivalent_hour;
    char am_pm_time;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minutes);
    am_pm_time = getchar();

    if (am_pm_time == ' ')
        am_pm_time = getchar();

    switch (am_pm_time) {
        case 'p':
        case 'P':
            equivalent_hour = 12 + hour;
            break;
        case 'a':
        case 'A':
            equivalent_hour = hour;
            break;
        default:
            printf("Invalid format.");
            exit(1);
    }

    printf("Equivalent 24-hour time: %d:%d", equivalent_hour, minutes);

    return 0;
}
