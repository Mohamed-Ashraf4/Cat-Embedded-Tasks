#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], sum = 0;
    printf("\nEnter 10 numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avr = (float) sum / 10;

    printf(" the sum = %d \n the average = %.2f", sum, avr);
    return 0;
}