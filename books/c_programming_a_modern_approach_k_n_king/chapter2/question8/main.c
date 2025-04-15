#include <stdio.h>
#include <stdlib.h>

int main() {
    float loan, interest_rate, monthly_interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("\n");

    monthly_interest_rate = (interest_rate / 100) / 12;

    balance = loan * (1 + monthly_interest_rate) - monthly_payment;
    loan = balance;

    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = loan * (1 + monthly_interest_rate) - monthly_payment;
    loan = balance;

    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = loan * (1 + monthly_interest_rate) - monthly_payment;
    loan = balance;

    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
