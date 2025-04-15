#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    The following table shows the daily flights from one city to another:

    Departure time      Arrival time
     8:00 a.m.          10:16 a.m.
     9:43 a.m.          11:52 a.m.
     11:19 a.m.         1:31 p.m.
     12:47 p.m.         3:00 p.m.
     2:00 p.m.          4:08 p.m.
     3:45 p.m.          5:55 p.m.
     7:00 p.m.          9:20 p.m.
     9:45 p.m.          11:58 p.m.

    Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
    hour clock). The program then displays the departure and arrival times for the flight whose
    departure time is closest to that entered by the user:

    Enter a 24-hour time: 13:15
    Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

    Hint: Convert the input into a time expressed in minutes since midnight, and compare it to
    the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 ×
    60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
    midnight) than to any of the other departure times.
    */

    int hours, minutes, time_in_minutes;

    int flight1_departure = 8 * 60;
    int flight2_departure = 9  * 60 + 43;
    int flight3_departure = 11 * 60 + 19;
    int flight4_departure =  12 * 60 + 47;
    int flight5_departure = 14 * 60;
    int flight6_departure = 15 * 60 + 45;
    int flight7_departure = 19 * 60;
    int flight8_departure = 21 * 60 + 45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    time_in_minutes = hours * 60 + minutes;

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
