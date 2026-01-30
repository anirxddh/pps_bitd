// QUESTION 1

/*
Program: Simple Interest Calculator.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate simple interest.
*/

#include <stdio.h>

int main()
{
    int t;
    float p, r, SI;

    printf("Enter the amount you have deposited in the bank: ");
    scanf("%f", &p);
    printf("The amount you deposited was: %2f \n", p);

    printf("Enter the time for which you have deposited the amount in the bank: ");
    scanf("%d", &t);
    printf("The time for which you deposited your amount was: %2d \n", t);

    printf("Enter the rate of interest you deposited the amount for: ");
    scanf("%f", &r);
    printf("The rate of interest was: %2f \n", r);

    SI = (p * r * t) / t;

    printf("Your Simple Interest was: %2f \n", SI);

    return 0;
}