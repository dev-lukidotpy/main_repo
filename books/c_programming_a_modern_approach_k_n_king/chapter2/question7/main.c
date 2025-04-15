#include <stdio.h>
#include <stdlib.h>

int main() {
    int dollar_amount, residual_amount;

    int one_dollar_bill = 1;
    int five_dollars_bill = 5;
    int ten_dollars_bill = 10;
    int twenty_dollars_bill = 20;

    // No loop

    printf("Enter a dolar amount: ");
    scanf("%d", &dollar_amount);

    printf("\n");

    // Twenty dollars bill

    residual_amount = (dollar_amount % twenty_dollars_bill);
    dollar_amount -= residual_amount;

    printf("$20 bills: %d\n", dollar_amount / twenty_dollars_bill);

    dollar_amount = residual_amount;

    // Ten dollars bill

    residual_amount = (dollar_amount % ten_dollars_bill);
    dollar_amount -= residual_amount;

    printf("$10 bills: %d\n", dollar_amount / ten_dollars_bill);

    dollar_amount = residual_amount;

    // Five dollars bill

    residual_amount = (dollar_amount % five_dollars_bill);
    dollar_amount -= residual_amount;

    printf(" $5 bills: %d\n", dollar_amount / five_dollars_bill);

    dollar_amount = residual_amount;

    // One dollar bill

    residual_amount = (dollar_amount % one_dollar_bill);
    dollar_amount -= residual_amount;

    printf(" $1 bills: %d\n", dollar_amount / one_dollar_bill);

    return 0;
}
