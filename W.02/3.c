#include <stdio.h>
#include <stdlib.h>

int main()
{

    int id;
    printf("\n Enter your ID : ");
    scanf("%d", &id);
    switch (id)
    {
    case 1234:
        printf("Hi,Harry");
        break;
    case 5678:
        printf("Hi,Ron");
        break;
    case 1145:
        printf("Hi,Hermione");
        break;
    default:
        printf("Wrong ID");
        break;
    }

    return 0;
}