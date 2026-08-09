#include <stdio.h>

int main()
{ // gross salary
    float basicSalary = 0;
    float HRA = 0;
    float DA = 0;
    float grossSalary = 0;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
    {
        HRA = basicSalary * 0.20;
        DA = basicSalary * 0.80;
    }
    else if (basicSalary <= 20000)
    {
        HRA = basicSalary * 0.25;
        DA = basicSalary * 0.90;
    }
    else
    {
        HRA = basicSalary * 0.30;
        DA = basicSalary * 0.95;
    }

    grossSalary = basicSalary + HRA + DA;

    
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}