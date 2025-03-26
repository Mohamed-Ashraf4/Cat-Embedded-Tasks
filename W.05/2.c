#include <stdio.h>
#include <stdlib.h>

// Function to calculate summation using pointers
int sum(int *n1, int *n2){
return *n1 + *n2 ;
}

int main() {
    int num1,num2;
    printf("\nEnter two numbers to sum\n");
    printf("the first number: ");
    scanf("%d",&num1);
    printf("the second number: ");
    scanf("%d",&num2);
    // Call the function and print the result
    printf("the sum of them is %d \n",sum(&num1,&num2));
    return 0;
}