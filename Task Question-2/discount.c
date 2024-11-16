#include <stdio.h>

int main() {
    float price, discountPercentage, discountAmount, finalPrice;

   
    printf("\nEnter the original price of the item: ");
    scanf("%f", &price);

    if (price >=5000) {
        discountPercentage = 20;
    }
    else if (price>=3000) {
        discountPercentage = 15;
    }
    else if (price>=1000) {
        discountPercentage = 10; 
    }
    else {
        discountPercentage = 5; 
    }


    discountAmount = (price * discountPercentage) / 100;


    finalPrice = price - discountAmount;

    printf("Discount Percentage: %.0f\n", discountPercentage);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Price after discount: %.2f\n", finalPrice);

    return 0;
}

