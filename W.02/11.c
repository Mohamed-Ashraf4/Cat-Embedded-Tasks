#include <stdio.h>
#include <stdlib.h>

int main() {

    int height;
    printf("\nEenter the height of the Pyramid : \n");
    scanf("%d",&height);

for (int i = 1; i <= height; i++)
{
    for (int j = 0; j < height-i; j++)
    {
        printf(" ");
    }
    for (int k = 0; k <((i*2)-1) ; k++)
    {
        printf("*");
    }
    printf("\n");   
}
    return 0;
}