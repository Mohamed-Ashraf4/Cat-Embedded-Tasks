#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10, *ptr = &num;
    printf("\nthe orginal number %d", num);
    //change the value by pointer
    *ptr = 20;
    printf("\nthe number after pointer %d \n", num);
    return 0;
}