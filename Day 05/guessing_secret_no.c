//program to guess the secret number

#include <stdio.h>

int main()
{
    int guess, secret = 39;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Correct! You guessed it.\n");

       } while (guess != secret);

    return 0;
}
