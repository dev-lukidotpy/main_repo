#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    In one state, single residents are subject to the following income tax:
    Income Amount of tax

    Not over $750 1% of income
    $750–$2,250 $7.50 plus 2% of amount over $750
    $2,250–$3,750 $37.50 plus 3% of amount over $2,250
    $3,750–$5,250 $82.50 plus 4% of amount over $3,750
    $5,250–$7,000 $142.50 plus 5% of amount over $5,250
    Over $7,000 $230.00 plus 6% of amount over $7,000

    Write a program that asks the user to enter the amount of taxable income, then displays the
    tax due.
    */

    float taxable_income, tax_rate, tax = 0;
    int value_to_tax;

    printf("Enter your taxable amount of income: ");
    scanf("%f", &taxable_income);

    if (taxable_income < 750)
        tax_rate = 0.01f;

    if (750 <= taxable_income < 2250)
        tax_rate = 0.02f;
        value_to_tax = taxable_income - 750;
        tax += 7.50f;

    if (2250 <= taxable_income < 3750)
        tax_rate = 0.03f;
        value_to_tax = taxable_income - 2250;
        tax += 37.50f;


    if (3750 <= taxable_income < 5250)
        tax_rate = 0.04f;
        value_to_tax = taxable_income - 3750;
        tax += 82.50f;

    if (5250 <= taxable_income < 7000)
        tax_rate = 0.05f;
        value_to_tax = taxable_income - 5250;
        tax += 142.50f;

    if (taxable_income > 750)
        tax_rate = 0.06f;
        value_to_tax = taxable_income - 700;
        tax += 230.00f;

    tax += value_to_tax * tax_rate;

    printf("Tax due: %.2f", tax);

    return 0;
}
