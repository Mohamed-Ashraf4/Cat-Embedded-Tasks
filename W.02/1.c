#include <stdio.h>
#include <stdlib.h>

int main()
{

    float work_hours, hour_rate, salary;
    hour_rate = 50;

    printf("Enter your working hours : ");
    scanf("%f", &work_hours);
    salary = work_hours * hour_rate;

    if (work_hours < 40)
    {
        salary -= (salary * 0.10);
    }
    printf("Salary = %.2f $", salary);
    return 0;
}
