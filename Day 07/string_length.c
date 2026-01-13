//program to get a string and return the length of the string

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Count characters until null character '\0'
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}

