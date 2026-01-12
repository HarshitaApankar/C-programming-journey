//program to find the sum and average of elemnts in array
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];          // Add element to sum
    }

    // Calculate average
    avg = sum / n;

    // Print sum and average
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
