//Program to take a string as input and display the reverse of the string.

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Reversed string: ");

    for(i = length - 1; i >= 0; i--) //loop starting from the end of the string
    {
        printf("%c", str[i]);
    }
    printf("\nPress Enter to exit...");
    getchar();
    
    return 0;
}

