#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that prompts the user to enter two dates and then indicates which date
    comes earlier on the calendar:

    Enter first date (mm/dd/yy): 3/6/08
    Enter second date (mm/dd/yy): 5/17/07
    5/17/07 is earlier than 3/6/08
    */

    int first_year, first_month, first_day;
    int second_year, second_month, second_day;
    int data_order;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

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
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d", first_month, first_day, first_year, second_month, second_day, second_year);
            break;
        case 2:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d", second_month, second_day, second_year, first_month, first_day, first_year);
            break;
    }

    return 0;
}
