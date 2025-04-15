#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN strlen(buffer)

int main() {
    /*
    The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
    messages. Here’s a typical B1FF communiqué:

    H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

    Write a “B1FF filter” that reads a message entered by the user and translates it into B1FFspeak:

    Enter message: Hey dude, C is rilly cool
    In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

    Your program should convert the message to upper-case letters, substitute digits for certain
    letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.

    Hint: Store the original message in an array of characters, then go back through the array,
    translating and printing characters one by one.
    */

    char ch;
    char buffer[255] = {0};
    int buffer_index = 0;

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
                buffer[buffer_index] = '4';
                break;
            case 'B':
                buffer[buffer_index] = '8';
                break;
            case 'E':
                buffer[buffer_index] = '3';
                break;
            case 'I':
                buffer[buffer_index] = '1';
                break;
            case 'O':
                buffer[buffer_index] = '0';
                break;
            case 'S':
                buffer[buffer_index] = '5';
                break;
            default:
                buffer[buffer_index] = toupper(ch);
                break;
        }

        buffer_index++;
    }

    strcat(buffer, "!!!!!!!!!!");

    printf("In B1FF-speak: ");

    for (buffer_index = 0; buffer_index <= LEN; buffer_index++)
        printf("%c", buffer[buffer_index]);

    return 0;
}
