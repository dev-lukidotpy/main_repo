#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Programming Project 8 in Chapter 2 asked you to write a program that calculates the
    remaining balance on a loan after the first, second, and third monthly payments. Modify the
    program so that it also asks the user to enter the number of payments and then displays the
    balance remaining after each of these payments.
    */
    float loan, interest_rate, monthly_interest_rate, monthly_payment, balance;
    int num_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("How much payments would you like to simulate? ");
    scanf("%d", &num_of_payments);

    printf("\n");

    monthly_interest_rate = (interest_rate / 100) / 12;

    for (int i = 0; i < num_of_payments; i++) {
        balance = loan * (1 + monthly_interest_rate) - monthly_payment;
        loan = balance;

        printf("Balance remaining after %d° payment: $%.2f\n", i + 1, balance);
    }

    return 0;
}
