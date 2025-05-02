#include <stdio.h>

// Define a structure for Employee
struct Employee {
    float salary;
    float bonus;
    float deductions;
};

int main() {
    // Declare three Employee variables
    struct Employee mohsen, maged, mariam;

    printf("Enter Mohsen's salary: ");
    scanf("%f", &mohsen.salary);
    printf("Enter Mohsen's bonus: ");
    scanf("%f", &mohsen.bonus);
    printf("Enter Mohsen's deductions: ");
    scanf("%f", &mohsen.deductions);

    printf("Enter Maged's salary: ");
    scanf("%f", &maged.salary);
    printf("Enter Maged's bonus: ");
    scanf("%f", &maged.bonus);
    printf("Enter Maged's deductions: ");
    scanf("%f", &maged.deductions);

    printf("Enter Mariam's salary: ");
    scanf("%f", &mariam.salary);
    printf("Enter Mariam's bonus: ");
    scanf("%f", &mariam.bonus);
    printf("Enter Mariam's deductions: ");
    scanf("%f", &mariam.deductions);

    float total_salary = mohsen.salary + maged.salary + mariam.salary;
    float total_bonus = mohsen.bonus + maged.bonus + mariam.bonus;
    float total_deductions = mohsen.deductions + maged.deductions + mariam.deductions;

    // Print the total values
    printf("\n--- Total Supplied by Finance Team ---\n");
    printf("Total Salary: %.2f\n", total_salary);
    printf("Total Bonus: %.2f\n", total_bonus);
    printf("Total Deductions: %.2f\n", total_deductions);

    return 0;
}
