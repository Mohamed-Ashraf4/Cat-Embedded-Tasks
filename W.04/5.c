#include <stdio.h>

int main() {
    int arr[5][5];
    int rowSum[5] = {0}, colSum[5] = {0};

    // Input array elements
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: \n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j]; // Calculate row sum
            colSum[j] += arr[i][j]; // Calculate column sum
        }
    }

    // Print row totals
    printf("\nRow Totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", rowSum[i]);
    }

    // Print column totals
    printf("\nColumn Totals: ");
    for (int j = 0; j < 5; j++) {
        printf("%d ", colSum[j]);
    }

    return 0;
}
