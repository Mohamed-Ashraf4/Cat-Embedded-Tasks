#include <stdio.h>
#include <stdlib.h>

int fubonaci(int num); // define the function
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    int number = fubonaci(num); //  call function
    printf("the fubonaci number is %d", number);
    return 0;
}

// find fubonaci
int fubonaci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fubonaci(num - 1) + fubonaci(num - 2); // recall the function
}