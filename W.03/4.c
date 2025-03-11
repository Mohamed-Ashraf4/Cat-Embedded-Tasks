#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USERNAME "miky"
#define PASS "2004"

int login() // login function
{
    char username[50], password[50];
    printf("\nEnter your Username: ");
    scanf("%49s", username);

    if (strcmp(username, USERNAME) != 0) // check the username
    {
        printf("the username not found\n");
        return 1;
    }
    else
    {
        printf("\nEnter your password: ");
        scanf("%49s", password);

        if (strcmp(password, PASS) == 0) // check the password
        {
            printf("Login successful\n");
            return 0;
        }
        else
        {
            printf("sorry the password is wrong\n");
            return 1;
        }
    }
}
int main()
{
    while (login())
        ;
    return 0;
}