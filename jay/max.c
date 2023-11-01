#include <stdio.h>

int main()
{
    int arr[5], i, max;

    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf(" %d ", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The greatest element is: %d ", max);

    return 0;
}