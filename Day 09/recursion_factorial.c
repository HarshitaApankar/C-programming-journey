//program to find the factorial of a number using recursion.

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    if(n == 0)
        return 1;      // base case
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d\n", factorial(num));

    return 0;
}
