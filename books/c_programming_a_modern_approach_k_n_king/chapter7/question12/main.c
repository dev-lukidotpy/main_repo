#include <stdio.h>

int main() {
    char c;
    double num = 0.0, operand = 0.0, result = 0.0;
    char op = '+';

    printf("Enter an expression: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t') {
            continue;
        }

        if ((c >= '0' && c <= '9') || c == '.') {
            ungetc(c, stdin);
            scanf("%lf", &num);
            operand = num;

            if (op == '+') {
                result += operand;
            } else if (op == '-') {
                result -= operand;
            } else if (op == '*') {
                result *= operand;
            } else if (op == '/') {
                if (operand != 0.0) {
                    result /= operand;
                } else {
                    printf("Error: Division by zero.\n");
                    return 1;
                }
            }
        }

        if (c == '+' || c == '-' || c == '*' || c == '/') {
            op = c;
        }
    }

    printf("Value of expression: %.1f\n", result);

    return 0;
}
