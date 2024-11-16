#include <stdio.h>

int main() {
    int number;
    
    // Prompt user to enter the subject type
    printf("\nEnter your subject for number type:");
    printf("\nType 1 for math");
    printf("\nType 2 for science");
    printf("\nType 3 for other");
    
    // Input the number
    printf("\nEnter your number: ");
    scanf("%d", &number);  // Read user input
    
    // Check the value of number and display corresponding message
    if (number == 1) {
        printf("\nCongrats! You won $23");
    } 
    else if (number == 2) {
        printf("\nCongrats! You won $11");
    } 
    else if (number == 3) {
        printf("\nSorry! The gift applies only to math & science");
    } 
    else {
        printf("\nInvalid input");
    }

    return 0;
}
