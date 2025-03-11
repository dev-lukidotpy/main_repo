#include <stdio.h>
#include <string.h>

void strcen(int str_len, char *str_adress) {
    int original_len = strlen(str_adress);

    if (str_len <= original_len) {
        printf("Error: str_len must be larger than the length of the string.\n");
        return;
    }

    int trim = (str_len - original_len) / 2;

    char result_str[str_len + 1];

    for (int i = 0; i < trim; i++) {
        result_str[i] = ' ';
    }

    strcpy(result_str + trim, str_adress);

    for (int i = trim + original_len; i < str_len; i++) {
        result_str[i] = ' ';
    }

    result_str[str_len] = '\0';

    strcpy(str_adress, result_str);
}

int main() {
    char string[60] = "teste";

    printf("Before: %p\n", string);
    printf("Before: %s\n", string);

    strcen(58, string);

    printf("After: %p\n", string);

    printf("%c", '=');
    printf("%s", string);
    printf("%c", '=');

    return 0;
}
