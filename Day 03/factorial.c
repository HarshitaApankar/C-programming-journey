//program to find factorial of number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long fact=1;

    printf("\n Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
           fact=fact*i;
    }
    printf("\n Factorial of %d is %lld\n",n,fact);
    return 0;
}


