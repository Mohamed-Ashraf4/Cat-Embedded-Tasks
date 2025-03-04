#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    printf("Enter your grade : ");
    scanf("%d", &grade);

    if (grade >= 85 && grade <= 100)
    {
        printf("Excellent\n");
    }
    else if (grade >= 75 && grade < 85)
    {
        printf("Very Good\n");
    }
    else if (grade >= 60 && grade < 75)
    {
        printf("Good\n");
    }
    else if (grade >= 50 && grade < 60)
    {
        printf("Pass\n");
    }
    else if (grade >= 0 && grade < 50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("enter a valid number\n");
    }
    return 0;
}
