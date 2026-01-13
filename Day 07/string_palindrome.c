//Program to check wheather the string is palindrome or not

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // Compare characters from start and end
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome\n");

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}
