#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply,
    or divide two fractions (by entering either +, -, *, or / between the fractions).
    */

    int num1, denom1, num2, denom2, result_num, result_denom;
    char operation;

    printf("Enter the operation you want to do following the format [00/00+00/00]\n");
    printf("Change '+' to '-', '*' or '/': \n");
    scanf("%d/%d", &num1, &denom1);
    operation = getchar();
    scanf("%d/%d", &num2, &denom2);

    switch (operation) {
        case '+':
            if (denom1 == denom2) {
                result_num = num1 + num2;
                result_denom = denom1;
            }

            if (denom1 != denom2) {
                result_num = (num1 * denom2) + (num2 * denom1);
                result_denom = denom1 * denom2;
            }

            printf("The sum is %d/%d\n", result_num, result_denom);

            break;
        case '-':
            if (denom1 == denom2) {
                result_num = num1 - num2;
                result_denom = denom1;
            }

            if (denom1 != denom2) {
                result_num = (num1 * denom2) - (num2 * denom1);
                result_denom = denom1 * denom2;
            }

            printf("The subtraction is %d/%d\n", result_num, result_denom);

            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;

            printf("The multiplication is %d/%d\n", result_num, result_denom);

            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;

            printf("The division is %d/%d\n", result_num, result_denom);

            break;
        default:
            printf("Operação inválida");
            exit(1);
    }

    return 0;
}
