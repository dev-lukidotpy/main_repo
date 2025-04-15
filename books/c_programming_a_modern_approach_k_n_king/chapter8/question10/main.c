#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_NUMBER_OF_FLIGHTS 8

int main() {
    /*
    Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an
    array and the arrival times are stored in a second array. (The times are integers, representing
    the number of minutes since midnight.) The program will use a loop to search the array of
    departure times for the one closest to the time entered by the user.
    */

    const int departure_time[MAX_NUMBER_OF_FLIGHTS] = {
        8 * 60,
        9  * 60 + 43,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45
    };

    const int arrival_time[MAX_NUMBER_OF_FLIGHTS] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58
    };

    int hours, minutes, time_in_minutes, closest_flight_departure_time, i,
    departure_hour, departure_minutes, closest_flight_arrival_time, closest_flight_diff, closest_flight_index, arrival_hour, arrival_minutes;

    char departure_time_format[4], arrival_time_format[4];

    printf("Enter a 24-hour time [hh:mm]: ");
    scanf("%d:%d", &hours, &minutes);

    time_in_minutes = hours * 60 + minutes;

    closest_flight_diff = 1440; // 24 hours

    for (i = 0; i < MAX_NUMBER_OF_FLIGHTS; i++) {
        if (abs(time_in_minutes - departure_time[i]) < closest_flight_diff) {
            closest_flight_diff = abs(time_in_minutes - departure_time[i]);
            closest_flight_index = i;
        }
    }

    closest_flight_departure_time = departure_time[closest_flight_index];
    closest_flight_arrival_time = arrival_time[closest_flight_index];

    departure_hour = (closest_flight_departure_time / 60) > 12 ? (closest_flight_departure_time / 60) - 12 : (closest_flight_departure_time / 60);
    departure_minutes = closest_flight_departure_time % 60;

    arrival_hour = (closest_flight_arrival_time / 60) > 12 ? (closest_flight_arrival_time / 60) - 12 : (closest_flight_arrival_time / 60);
    arrival_minutes = closest_flight_arrival_time % 60;

    (closest_flight_departure_time / 60) >= 12 ? strcpy(departure_time_format, "p.m") : strcpy(departure_time_format, "a.m");
    (closest_flight_arrival_time / 60) >= 12 ? strcpy(arrival_time_format, "p.m") : strcpy(arrival_time_format, "a.m");

    printf("Closest departure time is %.2d:%.2d %s., arriving at %.2d:%.2d %s.\n", departure_hour, departure_minutes, departure_time_format, arrival_hour, arrival_minutes, arrival_time_format);

    return 0;
}
