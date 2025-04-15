#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    4. Here’s a simplified version of the Beaufort scale, which is used to estimate wind force:

    Speed (knots) Description
    Less than 1 Calm
    1–3 Light air
    4–27 Breeze
    28–47 Gale
    48–63 Storm
    Above 63 Hurricane

    Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.
    */

    float wind_speed;


    printf("Enter the wind speed in knots: ");
    scanf("%f", &wind_speed);

    if (wind_speed < 1)
        printf("Calm");

    if (1 <= wind_speed && wind_speed <= 3)
        printf("Light air");

    if (4 <= wind_speed && wind_speed <= 27)
        printf("Breeze");

    if (28 <= wind_speed && wind_speed <= 47)
        printf("Gale");

    if (48 <= wind_speed && wind_speed <= 63)
        printf("Storm");

    if (wind_speed > 63)
        printf("Hurricane");

    return 0;
}
