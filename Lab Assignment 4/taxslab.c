/*
Program: Tax Slab Calculator.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate tax based on income slab.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long int income;
    double tax;

    printf("Enter the income amount in Rs.: \n");
    scanf("%lld", &income);

    if (income >= 0 && income < 400000)
    {
        printf("The Tax calculation is NIL. \n");
    }
    else if (income >= 400000 && income < 800000)
    {
        tax = 0.05 * income;
        printf("The tax on the income amount Rs. %lld is: Rs. %.2lf \n", income, tax);
    }
    else if (income >= 800000 && income < 1200000)
    {
        tax = 0.10 * income;
        printf("The tax on the income amount Rs. %lld is: Rs. %.2lf\n", income, tax);
    }
    else if (income >= 1200000 && income < 1600000)
    {
        tax = 0.15 * income;
        printf("The tax on the income amount Rs. %lld is: Rs. %.2lf \n", income, tax);
    }
    else if (income >= 1600000 && income < 2000000)
    {
        tax = 0.20 * income;
        printf("The tax on the income amount Rs. %lld is: Rs. %.2lf \n", income, tax);
    }
    else if (income >= 2000000 && income < 2400000)
    {
        tax = 0.25 * income;
        printf("The tax on the income amount Rs. %lld is: Rs. %.2lf \n", income, tax);
    }
    else
    {
        tax = 0.30 * income;
        printf("The tax on the income amount Rs. %lld is: Rs. %.2lf \n", income, tax);
    }

    return 0;
}