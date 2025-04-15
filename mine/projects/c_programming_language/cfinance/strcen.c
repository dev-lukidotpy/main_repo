#include "strcen.h"

void strcen(char string_to_centralize[], int centralized_string_length, char edge_character, int edge_thickness, int right_offset) {
    // Length of the inputted string centralized, padding and edge characters included
    int string_to_centralize_length = strlen(string_to_centralize);

    // Length of the string which will be printed to the console, including the right offset
    int max_length = centralized_string_length + right_offset;

    // Allocated memory to hold the inputted string centralized, padding and edge characters included
    char *centralized_string = malloc(sizeof(char) * (centralized_string_length + 1));

    // Validate if the length of the centralized string is larger than the string to centralize, if not, exit the function
    if (centralized_string_length <= string_to_centralize_length) {
        printf("Error: arg 2 value must be larger than arg 1 length\n");

        return;
    }

    // Represents the blank spaces in the centralized string, divided by two because of right and left padding
    int padding = (centralized_string_length - string_to_centralize_length) / 2;

    // Allocated memory to hold the string which will be printed to the console
    char *result_string = malloc(sizeof(char) * (max_length + 1));

    // Add edge characters based on edge thickness and set leftover values to empty space
    for (int i = 0; i < padding; i++) {
        if (i < edge_thickness) {
            centralized_string[i] = edge_character;
        } else {
            centralized_string[i] = ' ';
        }
    }

    // Include terminal null at the end of centralized string
    centralized_string[centralized_string_length + 1] = '\0';

    // Concatenate the string to centralize to the centralized string container right after the padding
    strcpy(centralized_string + padding, string_to_centralize);

    // Include the right side padding and edge characters based on edge thickness
    for (int i = padding + string_to_centralize_length; i < centralized_string_length; i++) {
        if (i >= centralized_string_length - edge_thickness) {
            centralized_string[i] = edge_character;
        } else {
            centralized_string[i] = ' ';
        }
    }

    // Add the right offset
    for (int i = 0; i < right_offset; i++) {
        result_string[i] = ' ';
    }

    // Concatenate centralized string to the result string
    strcpy(result_string + right_offset, centralized_string);

    // Include terminal null at the end of result string
    result_string[max_length] = '\0';

    // Print the result
    printf("%s\n", result_string);

    // Free all allocated memory after printing the result
    free(centralized_string);
    free(result_string);
}
