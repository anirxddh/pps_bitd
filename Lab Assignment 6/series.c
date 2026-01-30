/*
Program: Sum of Series.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of a series using while loop.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    double termsum = 0;
    int n;
    int i;

    printf("Enter the term limit upto n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        termsum = 1.0 / (i + 1);
        sum = sum + termsum;
    }

    printf("The sum of the series is: %.2f", sum);

    return 0;
}