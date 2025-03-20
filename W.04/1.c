#include <stdio.h>
#include <stdlib.h>

// Function prototypes for sorting
void sort_as(int arr[], int size);  // Ascending order
void sort_des(int arr[], int size); // Descending order

int main() {
    int arr[100], i = 0, order;

    // Prompt user to enter numbers
    printf("Enter the numbers to sort:\n(enter 0 to start sorting)\n");
    
    // Read input until the user enters 0
    for (; i < 100; i++) { 
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            break; // Stop input when 0 is entered
    }

    // Print the original array
    printf("\nThe original array: \n");
    for (int j = 0; j < i; j++) {
        printf("%d   ", arr[j]);
    }
    printf("\n");

    // Ask the user to choose sorting order
    printf("Choose sorting order:\n");
    printf("0 → Ascending (Small to Large)\n");
    printf("1 → Descending (Large to Small)\n");
    printf("Enter your choice: ");
    scanf("%d", &order);

    // Perform sorting based on user choice
    switch (order) {
        case 0:
            sort_as(arr, i); // Sort in ascending order
            break;
        case 1:
            sort_des(arr, i); // Sort in descending order
            break;
        default:
            printf("Invalid choice! Please enter 0 or 1.\n");
            return 1; // Exit if input is invalid
    }

    // Print the sorted array
    printf("\nSorted array:\n");
    for (int j = 0; j < i; j++) {
        printf("%d   ", arr[j]);
    }
    printf("\n"); // Improve output format

    return 0;
}

// Function to sort array in ascending order (Bubble Sort)
void sort_as(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Swap if left element is greater
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort array in descending order (Bubble Sort)
void sort_des(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Swap if right element is greater
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
