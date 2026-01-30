/*
Program: Net Salary Calculator.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate net salary based on basic salary.
*/

#include <stdio.h>

int main()
{
    float basic_salary;

    printf("Enter your basic salary: \n");
    scanf("%f", &basic_salary);

    float da, hra, Net_salary;
    da = (65.0 / 100.0) * basic_salary;
    hra = (25.0 / 100.0) * basic_salary;

    Net_salary = basic_salary + da + hra;

    printf("Your Basic Salary is: %2f \n", basic_salary);
    printf("Your Daily Allowance (DA) is: %2f \n", da);
    printf("Your House Rent Allowance (HRA) is: %2f \n", hra);
    printf("Your Net Salary is: %2f \n", Net_salary);

    return 0;
}