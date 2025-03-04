#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans;
    do
    {
        printf("What is the result of 3 x 4 ? \n");
        scanf("%d", &ans);

        if (ans != 12)
        {
            printf("Try again\n");
        }
    } while (ans != 12);

    printf("Thanks\n");

    return 0;
}