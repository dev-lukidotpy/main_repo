#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that finds the largest and smallest of four integers entered by the user:

    Enter four integers: 21 43 10 35
    Largest: 43
    Smallest: 10

    Use as few if statements as possible. Hint: Four if statements are sufficient
    */

    int num1, num2, num3, num4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    smallest = num1;
    largest = num1;

    if (num2 > largest)
        largest = num2;
    if (num2 < smallest)
        smallest = num2;

    if (num3 > largest)
        largest = num3;
    if (num3 < smallest)
        smallest = num3;

    if (num4 > largest)
        largest = num4;
    if (num4 < smallest)
        smallest = num4;

    printf("Largest: %d", largest);
    printf("Smallest: %d", smallest);

    return 0;
}
