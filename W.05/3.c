#include <stdio.h>
#include <stdlib.h>

// Function to calculate the scalar product of two arrays
int scaler(int *a, int *b)
{
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result += *(a + i) * *(b + i); // Multiply corresponding elements and sum them
    }
    return result;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {6, 7, 8, 9, 10};
    // Call the function and print the result
    int result = scaler(arr1, arr2);
    printf("the scaler product is %d", result);
    return 0;
}