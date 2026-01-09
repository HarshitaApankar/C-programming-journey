//program to calculate arithmetic operation using menu driven 
#include <stdio.h>

int main()
{
    int a,b,ch;

    while(1)
    {
        printf("\n--- MENU DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter you choice: \n");
        scanf("%d",&ch);

        printf("\n Enter two input numbers: \n");
        scanf("%d %d",&a,&b);

        switch (ch)
         {
            case 1:
                printf("Result = %d\n", a + b);
                break;

            case 2:
                printf("Result = %d\n", a - b);
                break;

            case 3:
                printf("Result = %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %d\n", a / b);
                else
                    printf("Division by zero not allowed\n");
                break;

            default:
                printf("Invalid choice\n");
         }
    }
}
