//program to take input into array and then print the elements

#include <stdio.h>

int main()
{
    int n, i;
    int arr[40];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    //taking elements from user
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  // Store input in array at index i
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // Print each element of array
    }

    return 0;
}
