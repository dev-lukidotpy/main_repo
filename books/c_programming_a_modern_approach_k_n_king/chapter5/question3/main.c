#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    3. Modify the broker.c program of Section 5.2 by making both of the following changes:

    (a) Ask the user to enter the number of shares and the price per share, instead of the value
    of the trade.

    (b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
    share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more).
    Display the rival’s commission as well as the commission charged by the original broker.
    */

    /* Calculates a broker's commission */

    float value, number_of_shares, price_per_share, commission, rival_comission;

    printf("Enter the number of shares: ");
    scanf("%f", &number_of_shares);

    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value = number_of_shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;

    if (value < 6250.00f)
        commission = 56.00f + .0066f * value;

    if (value < 20000.00f)
        commission = 76.00f + .0034f * value;

    if (value < 50000.00f)
        commission = 100.00f + .0022f * value;

    if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if (number_of_shares < 2000)
        rival_comission = 33.00f + 0.03f * number_of_shares;
    else
        rival_comission = 33.00f + 0.02f * number_of_shares;

    printf("Commission: $%.2f\n", commission);
    printf("Rival's comission: $%.2f\n", rival_comission);

    return 0;
}
