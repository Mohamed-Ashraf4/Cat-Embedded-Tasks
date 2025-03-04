#include <stdio.h>
#include <stdlib.h>

#define id 2004
#define pass 2004

int main()
{
    int u_id, u_pass, try = 0;
    printf("Enter your ID : ");
    scanf("%d", &u_id);
    if (u_id == id)
    {
        while (try < 3)
        {
            printf("\nEnter your password: ");
            scanf("%d", &u_pass);
            if (u_pass != pass)
            {
                try++;
                if (try == 3)
                {
                    printf("No more tries\n");
                    break;
                }
                else
                {
                    printf("Try Again");
                }
            }
            else
            {
                printf("** Welcome **");
                break;
            }
        }
    }
    else
    {
        printf("You are not registered");
    }

    return 0;
}