#include <stdio.h>
#include <stdlib.h>

void find_repeat(int arr[], int size);

int main()
{
    int arr[100], i = 0;

    // Prompt the user to enter numbers
    printf("Enter the numbers of the array:\n(Enter 0 to stop)\n");

    // Read input until the user enters 0
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            break; // Stop input when 0 is entered
    }

    // Print the original array
    printf("\nThe original array:\n");
    for (int j = 0; j < i; j++)
    {
        printf("%d   ", arr[j]);
    }

    printf("\nThe repeating numbers are: ");
    find_repeat(arr, i);

    return 0;
}

void find_repeat(int arr[], int size)
{
    int rep[1000] = {0}; // Array to mark repeat 

    for (int i = 0; i < size; i++)
    {
        if (rep[arr[i]] == 0)
        {
            rep[arr[i]]++; // Mark the number as seen
        }
        else if (rep[arr[i]] == 1)
        {
            printf("%d  ", arr[i]); // Print the repeating number once
            rep[arr[i]] = 2; // Mark it so it won’t be printed again
        }
    }
    printf("\n");
}
