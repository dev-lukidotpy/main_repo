#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-
    hour clock. The input will have the form hours:minutes followed by either A, P, AM, or PM
    (either lower-case or upper-case). White space is allowed (but not required) between the
    numerical time and the AM/PM indicator. Examples of valid input:

    1:15P
    1:15PM
    1:15p
    1:15pm
    1:15 P
    1:15 PM
    1:15 p
    1:15 pm

    You may assume that the input has one of these forms; there is no need to test for errors.
    */

    int hours, minutes, time_in_minutes;
    char am_pm_clock;

    int flight1_departure = 8 * 60;
    int flight2_departure = 9  * 60 + 43;
    int flight3_departure = 11 * 60 + 19;
    int flight4_departure =  12 * 60 + 47;
    int flight5_departure = 14 * 60;
    int flight6_departure = 15 * 60 + 45;
    int flight7_departure = 19 * 60;
    int flight8_departure = 21 * 60 + 45;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    am_pm_clock = getchar();
    if (am_pm_clock == ' ')
        am_pm_clock = getchar();

    switch (am_pm_clock) {
        case 'p':
        case 'P':
            time_in_minutes = ((12 + hours) * 60) + minutes;
            break;
        case 'a':
        case 'A':
            time_in_minutes = hours * 60 + minutes;
            break;
        default:
            printf("Invalid time");
            exit(1);
    }

    int closest_flight_in_minutes = 1440, closest_flight_index = 0;

    if (abs(time_in_minutes - flight1_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight1_departure);
        closest_flight_index = 1;
    }

    if (abs(time_in_minutes - flight2_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight2_departure);
        closest_flight_index = 2;
    }

    if (abs(time_in_minutes - flight3_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight3_departure);
        closest_flight_index = 3;;
    }

    if (abs(time_in_minutes - flight4_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight4_departure);
        closest_flight_index = 4;
    }

    if (abs(time_in_minutes - flight5_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight5_departure);
        closest_flight_index = 5;
    }

    if (abs(time_in_minutes - flight6_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight6_departure);
        closest_flight_index = 6;
    }

    if (abs(time_in_minutes - flight7_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight7_departure);
        closest_flight_index = 7;
    }

    if (abs(time_in_minutes - flight8_departure) < closest_flight_in_minutes) {
        closest_flight_in_minutes = abs(time_in_minutes - flight8_departure);
        closest_flight_index = 8;
    }

    switch (closest_flight_index) {
        default:
            printf("Invalid time.\n");
            break;
        case 1:
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
            break;

        case 2:
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
            break;

        case 3:
            printf("Closest departure time is 11:19 p.m., arriving at 1:31 p.m.");
            break;

        case 4:
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
            break;

        case 5:
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
            break;

        case 6:
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
            break;

        case 7:
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
            break;

        case 8:
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
            break;
    }

    return 0;
}
