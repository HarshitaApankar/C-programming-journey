#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int n)
{
    if(n % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");
        
    printf("\nPress enter to exit");
    getchar();
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);


    return 0;
}
