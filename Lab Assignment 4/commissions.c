/*
Program: Commission Calculator.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate commission based on sales amount.
*/

#include <stdio.h>

int main()
{
    float sales;
    float commissions;

    printf("Enter the sales amount in Rs.: \n");
    scanf("%f", &sales);

    if (sales <= 500)
    {
        commissions = (5.0 / 100.0) * sales;
        printf("The commission on the sales amount Rs. %.1f is: %.1f \n", sales, commissions);
    }
    else if (sales > 500 && sales <= 2000)
    {
        commissions = 35 + ((10.0 / 100.0) * sales);
        printf("The commission on the sales amount Rs. %.1f is: %.1f \n", sales, commissions);
    }
    else if (sales > 2000 && sales <= 5000)
    {
        commissions = 185 + ((12.0 / 100.0) * sales);
        printf("The commission on the sales amount Rs. %.1f is: %.1f \n", sales, commissions);
    }
    else
    {
        commissions = (12.5 / 100.0) * sales;
        printf("The commission on the sales amount Rs. %.1f is: %.1f \n", sales, commissions);
    }
    return 0;
}