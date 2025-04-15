#include "strmult.h"

void strmult(char string_to_repeat[], int number_of_times, int right_offset) {
    int str_len = strlen(string_to_repeat);

    int length_to_alloc = (number_of_times * str_len + right_offset + 1);

    char *result_str = malloc(sizeof(char) * length_to_alloc);

    strcpy(result_str + right_offset, string_to_repeat);

    for (int i = 0; i < length_to_alloc - 1; i += str_len) {
        if (i < right_offset) {
            result_str[i] = ' ';
        } else {
            strcpy(&result_str[i], string_to_repeat);
        }
    }

    result_str[length_to_alloc] = '\0';

    printf("%s\n", result_str);

    free(result_str);
}

