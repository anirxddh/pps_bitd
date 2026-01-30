/*
Program: Factorial Calculator.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate factorial of a number.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long fact = 1;
    int num;
    int i;

    printf("Enter the number of which you want factorial of: \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of Negative Numbers do Not exist \n");
    }
    else if (num == 0)
    {
        printf("Factorial of Zero is: %llu \n", fact);
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of the Number %d is: %llu", num, fact);
    }
    return 0;
}