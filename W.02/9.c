#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial = 1, i;

    printf("\nEnter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        i = num;
        while (i > 1)
        {
            factorial *= i;
            i--;
        }
        printf("Factorial of %d is %d\n", num, factorial);
    }
    return 0;
}
