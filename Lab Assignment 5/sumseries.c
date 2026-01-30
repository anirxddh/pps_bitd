/*
Program: Sum of Series.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of a series.
*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum = 0, termsum = 0;

    printf("Enter the number of terms n: \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        termsum = (i * (i + 1)) / 2;
        sum = sum + termsum;
    }

    printf("The sum of the series is: %d \n", sum);

    return 0;
}