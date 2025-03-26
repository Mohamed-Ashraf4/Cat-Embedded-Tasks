#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 20, z = 30;       // Define three integer variables
    int *px = &x, *py = &y, *pz = &z; // Define three pointers to int

    printf("\nBefore swapping pointers:\n");
    printf(" x = %d, y = %d, z = %d \n px = %p, py = %p, pz = %p \n *px = %d, *py = %d, *pz = %d \n", x, y, z, px, py, pz, *px, *py, *pz);
    
    // Swap pointers
    printf("\nSwapping pointers.\n");
    pz = px;
    px = py; 
    py = pz;

    printf("\nAfter swapping pointers:\n");
    printf(" x = %d, y = %d, z = %d \n px = %p, py = %p, pz = %p \n *px = %d, *py = %d, *pz = %d \n", x, y, z, px, py, pz, *px, *py, *pz);

    return 0;
}