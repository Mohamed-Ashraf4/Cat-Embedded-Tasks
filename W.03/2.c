#include <stdio.h>
#include <stdlib.h>

// global variables
int a = 10, b = 4;

void swap() // swap the variables
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    printf("the numbers before swapping\n a= %d // b= %d \n", a, b);
    swap(); // call function
    printf("the numbers after swapping\n a= %d // b= %d \n", a, b);
    return 0;
}