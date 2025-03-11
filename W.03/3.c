#include <stdio.h>
#include <stdlib.h>

int count_digits(int num) // function to count the digits
{
    int count = 0;
    // to count if number is 0
    if (num == 0)
        return 1;

    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    int count = count_digits(num); // call the function

    printf("the number of digits: %d\n", count);

    return 0;
}