#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    Write a program that formats product information entered by the user. A session with the
    program should look like this:

    Enter item number: 583
    Enter unit price: 13.5
    Enter purchase date (mm/dd/yyyy): 10/24/2010

    Item            Unit            Purchase
                    Price           Date
    583             $   13.50       10/24/2010

    The item number and date should be left justified; the unit price should be right justified.
    Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
    */

    int item_number, year, month, day;
    float unit_price = 0.00, max_dolar_amount = 9999.99;

    if (unit_price > max_dolar_amount) {
        printf("Max dolar amount up to $ 9999.99 only");
        exit(1);
    }

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    puts("");

    printf("Item\t\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%d\t\t\t$  %.2f\t\t%d/%d/%d", item_number, unit_price, month, day, year);

    return 0;
}
