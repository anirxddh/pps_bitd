/*
Program: Fibonacci Series Generator.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to generate Fibonacci series up to a given limit.
*/

#include <stdio.h>

int main()
{
    int n, i;

    int term1 = 0, term2 = 1;
    int series = term1 + term2;

    printf("Enter the limit of the series: \n");
    scanf("%d", &n);

    printf("Fibbonacci series is: %d, %d, ", term1, term2);

    for (i = 3; i <= n; i++)
    {
        printf("%d, ", series);
        term1 = term2;
        term2 = series;
        series = term1 + term2;
    }

    return 0;
}