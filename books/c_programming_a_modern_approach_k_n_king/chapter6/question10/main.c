#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Programming Project 9 in Chapter 5 asked you to write a program that determines which of
    two dates comes earlier on the calendar. Generalize the program so that the user may enter
    any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:

    Enter a date (mm/dd/yy): 3/6/08
    Enter a date (mm/dd/yy): 5/17/07
    Enter a date (mm/dd/yy): 6/3/07
    Enter a date (mm/dd/yy): 0/0/0
    5/17/07 is the earliest date
    */

    int first_year, first_month, first_day;
    int second_year, second_month, second_day;
    int data_order;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &second_month, &second_day, &second_year);

        if (second_month == 0 && second_day == 0 && second_year == 0) {
            break;
        }

        if (first_year == second_year) {
            if (first_month == second_month) {
                if (first_day < second_day) {
                    data_order = 1;
                } else {
                    data_order = 2;
                }
            }

            if (first_month < second_month) {
                data_order = 1;
            } else {
                data_order = 2;
            }
        } else {
            data_order = 2;
        }

        if (first_year < second_year) {
            data_order = 1;
        }

        switch (data_order) {
            case 1:
                continue;
            case 2:
                first_day = second_day;
                first_month = second_month;
                first_year = second_year;
        }
    }

    printf("%d/%d/%.2d is the earliest date", first_month, first_day, first_year);

    return 0;
}
