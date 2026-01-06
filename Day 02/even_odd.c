//program to check whether the number is odd or even


#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter a number :\n");
    scanf("%d",&n);

    if(n%2==0)
        printf("\nEven number\n");
    else
        printf("\nOdd number\n");
    return 0;
}
