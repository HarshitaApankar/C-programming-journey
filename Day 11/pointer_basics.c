#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;  // store address of x

    printf("Value of x = %d\n", x); 
    printf("Address of x = %p\n", &x);   //address of x
    printf("Value stored in pointer p = %p\n", p);
    printf("Value at address p = %d\n", *p);  //value at the address

    return 0;
}

