//Check whether a number is prime or not prime number

#include <stdio.h>

int main()
{
    int n,i,isPrime=1;

    printf("\nEnter a number : ");
    scanf("%d",&n);

    if(n<=1)
    {
        isPrime=0;
    }

    for(i=2;i<=n/2;i++)
    {

        if(n%i==0)
            isPrime=0;
        break;
    }
    if(isPrime)
        printf("\nNumber is a prime number\n");
    else
        printf("\nNumber is not a prime number\n");
    return 0;
}
