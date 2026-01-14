//program to calculate the sum of two numbers using function.

#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

int main() 
{
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d", &x);
    scanf("%d", &y);

    result = add(x, y);

    printf("Sum = %d\n", result);

    printf("\nPress Enter to exit...");
    getchar();
    return 0;
}

