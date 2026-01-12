//program to find the largest number from an array

#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("\nENTER ELEMENTS:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   // Store each element at index i
    }

    // Assume first element is the largest initially
    max = arr[0];

    // Compare remaining elements with current max
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Largest element = %d\n", max);
    return 0;
}

