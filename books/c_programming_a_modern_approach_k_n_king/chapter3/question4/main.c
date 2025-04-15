#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:
    Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
    You entered 404.817.6900
    */
    int part1 = 0, part2 = 0, part3 = 0;

    printf("Enter phone number: [(xxx) xxx-xxxx]: ");

    scanf("(%d) %d-%d", &part1, &part2, &part3);

    printf("You entered %d.%d.%d", part1, part2, part3);

    return 0;
}
