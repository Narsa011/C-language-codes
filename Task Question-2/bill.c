#include <stdio.h>

void main() {
    int units;
    float bill, cost, discount, netamount;

    printf("\n Enter your meter units: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 100) {
        cost = 2.5; // applied per unit this cost.
        bill = units * cost;
        discount = 5;
    } 
    else if (units > 100 && units < 250) {
        cost = 3.5; // applied per unit this cost.
        bill = units * cost;
        discount = 10;
    } 
    else if (units >= 250 && units < 500) {
        cost = 5.0; // applied per unit this cost.
        bill = units * cost;
        discount = 20;
    } 
    else if (units >= 500 && units < 800) {
        cost = 6.0; // applied per unit this cost.
        bill = units * cost;
        discount = 30;
    } 
    else if (units >= 800 && units < 1000) {
        cost = 8.0; // applied per unit this cost.
        bill = units * cost;
        discount = 40;
    } 
    else if (units >= 1000) {
        cost = 10.0; // applied per unit this cost.
        bill = units * cost;
        discount = 50;
    } 
    else {
        printf("\n Invalid input! Please enter a valid unit count.");
        return;
    }

    netamount = bill - bill * discount / 100;

    printf("\n Per unit cost: %.1f", cost);
    printf("\n Total unit cost: %.2f", bill);
    printf("\n Discount applied: %.1f%%", discount);
    printf("\n Amount after discount: %.2f", netamount);
    return 0;
}
