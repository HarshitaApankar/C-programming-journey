//Program to display square star pattern 

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)              //for each rows
    {
        for(j = 1; j <= 5; j++)          //for printing 5* in each row
        {
            printf("*");
        }
        printf("\n");           //for moving to next line after each row
    }
    return 0;
}

