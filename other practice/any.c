#include <stdio.h>

int main() {
    int marks;

    // Prompt user for input
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

  printf("\n %d ",(marks >= 50) ? "You have passed!" : "You have failed.;");
    return 0;
}
