#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], i = 0, unique[100] = {0};

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

    // Print unique elements (each number appears only once)
    printf("\nThe unique elements:\n");
    for (int j = 0; j < i; j++)
    {
        if (unique[arr[j]] == 0)
        { // Check if the number has been printed before
            printf("%d   ", arr[j]);
            unique[arr[j]]++; // Mark the number as printed
        }
    }

    return 0;
}
