#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[100], i = 0, large[2];

    // Prompt user to enter numbers
    printf("Enter the numbers of array:\n(enter 0 to start)\n");

    // Read input until the user enters 0
    for (i; i < 100; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0 && i>=2)
            break; // Stop input when 0 is entered
    }
    // Print the original array
    printf("\nThe original array: \n");
    for (int j = 0; j < i; j++)
    {
        printf("%d   ", arr[j]);
    }
    // Initialize largest and second largest
    if (arr[0] > arr[1])
    {
        large[0] = arr[0];
        large[1] = arr[1];
    }
    else
    {
        large[0] = arr[1];
        large[1] = arr[0];
    }
    // loop to make sure from the largest number
    for (int j = 2; j < i; j++)
    {
        if (arr[j] > large[0])
        {
            large[1] = large[0];
            large[0] = arr[j];
        }
        else if (arr[j] > large[1])
        {
            large[1] = arr[j];
        }
    }
    printf("\nthe second largest number : %d", large[1]);
    return 0;
}
