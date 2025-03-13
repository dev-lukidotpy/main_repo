#include "strcen.h"

void strcen(int str_len, char str[], char edge) {
    int string_to_centralize_len = strlen(str);

    char *centralized_string = malloc(sizeof(char) * str_len);

    if (str_len <= string_to_centralize_len) {
        printf("Error: arg str_len must be larger than the length of the inputted string\n");

        return;
    }

    int trim = (str_len - string_to_centralize_len) / 2;

    char result_str[str_len + 1];

    for (int i = 0; i < trim; i++) {
        if (i == 0) {
            result_str[i] = edge;
        } else {
            result_str[i] = ' ';
        }
    }

    strcpy(result_str + trim, str);

    for (int i = trim + string_to_centralize_len; i < str_len; i++) {
        if (i == str_len - 1) {
            result_str[i] = edge;
        } else {
            result_str[i] = ' ';
        }
    }

    result_str[str_len] = '\0';

    strcpy(centralized_string, result_str);

    printf("%s\n", centralized_string);
}

void strmult(int number_of_times, char string_to_repeat[]) {
    int str_len = strlen(string_to_repeat);
    int length_to_alloc = (number_of_times * str_len);

    char *result_str = malloc(sizeof(char) * length_to_alloc);

    strcpy(result_str, string_to_repeat);

    for (int i = 0; i < length_to_alloc; i += str_len) {
        strcpy(&result_str[i], string_to_repeat);
    }

    printf("%s\n", result_str);
}
