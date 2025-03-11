#include <stdio.h>
#include <stdlib.h>

// check the maxium number
int get_max(int n1, int n2)
{
    if (n1 < n2)
        return n2;
    else
        return n1;
}

int main()
{
    int num1, num2, max;
    printf("\nEnter two numbers\n");
    printf("the first number: ");
    scanf("%d", &num1);
    printf("the second number: ");
    scanf("%d", &num2);
    max = get_max(num1, num2); //call the function
    printf("the max number is %d \n", max);
    return 0;
}