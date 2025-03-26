#include <stdio.h>
#include <stdlib.h>

// Function to perform Bubble Sort using pointers
void bubblesort(int *arr, int size)
{
    int temp;
    // swap by pointer
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
// Function to print the array using pointers
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr[] = {56, 84, 3, 100, 36, 84, 96, 57, 1, 2, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    // call the function
    bubblesort(arr, size);

    printf("\nSorted array: ");
    printArray(arr, size);
    return 0;
}