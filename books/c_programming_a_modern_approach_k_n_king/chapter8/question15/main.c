#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 81

int main() {
    /*
    One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Caesar.
    It involves replacing each letter in a message with another letter that is a fixed number of
    positions later in the alphabet. (If the replacement would go past the letter Z, the cipher
    “wraps around” to the beginning of the alphabet. For example, if each letter is replaced by
    the letter two positions after it, then Y would be replaced by A, and Z would be replaced by
    B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the
    message to be encrypted and the shift amount (the number of positions by which letters
    should be shifted):

    Enter message to be encrypted: Go ahead, make my day.
    Enter shift amount (1-25): 3
    Encrypted message: Jr dkhdg, pdnh pb gdb.

    Notice that the program can decrypt a message if the user enters 26 minus the original key:

    Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
    Enter shift amount (1-25): 23
    Encrypted message: Go ahead, make my day.

    You may assume that the message does not exceed 80 characters. Characters other than letters should be left unchanged.
    Lower-case letters remain lower-case when encrypted, and
    upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the
    expression ((ch - 'A') + n) % 26 + 'A' to calculate the encrypted version of an uppercase letter, where ch stores the letter and n stores the shift amount.
    (You’ll need a similar expression for lower-case letters.)
    */

    char buffer[MAX_LENGTH] = {0};
    char ch = 0;
    int shift_amount = 0, index = 0;

    printf("Enter a message to be encrypted: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");

    for (index = 0; buffer[index] != '\0'; index++) {
        ch = buffer[index];

        if (isupper(ch))
            putchar(((ch - 'A') + shift_amount) % 26 + 'A');

        if (islower(ch))
            putchar(((ch - 'a') + shift_amount) % 26 + 'a');

        if (!isalnum(ch))
            putchar(ch);
    }

    return 0;
}
