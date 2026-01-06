//Program to perform basic operators (addition or subtraction)

#include <stdio.h>

int main()
{
    int a,b;
    char op;

    printf("Enter operator you want to perform (+ or -):\n");
    scanf("%c",&op);

    printf("\nEnter two numbers:\n");
    scanf("%d %d",&a,&b);

    if(op=='+')
        printf("Result = %d",a+b);
    else if (op=='-')
        printf("Result = %d",a-b);
    else
        printf("\nInvalid operator\n");
    return 0;
}
