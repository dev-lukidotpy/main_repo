#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Using the switch statement, write a program that converts a numerical grade into a letter
    grade:

    Enter numerical grade: 84
    Letter grade: B

    Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
    Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
    into two digits, then use a switch statement to test the ten’s digit.
    */

    int numerical_grade_ten_digit, whole_number;
    char letter_grade;

    printf("Enter numerical grade: ");
    scanf("%d", &whole_number);

    numerical_grade_ten_digit = whole_number / 10;

    if (whole_number < 0 || 100 < whole_number) {
        printf("Invalid data");
        return 1;
    }

    switch (numerical_grade_ten_digit) {
        case 10:
        case 9:
            letter_grade = 'A';
            break;
        case 8:
            letter_grade = 'B';
            break;
        case 7:
            letter_grade = 'C';
            break;
        case 6:
            letter_grade = 'D';
            break;
        case 0:
            letter_grade = 'F';
            break;

    }

    printf("Letter grade: %c", letter_grade);

    return 0;
}
