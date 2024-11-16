#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You entered %d as your age", age);

    if (age >= 18)
    {
        printf("\nYou can vote");
    }
    else if (age >= 1)
    {
        printf("\nYou cannot vote because you are a child");
    }
  

    return 0;
}
