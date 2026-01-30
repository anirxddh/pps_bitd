/*
Program: Fibonacci Series
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to generate Fibonacci series.
*/

#include <stdio.h>

int main()
{
    int n, i;

    int term1 = 0, term2 = 1;
    int series = term1 + term2;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    printf("Fibbonaci Series: %d, %d, ", term1, term2);

    for (i = 3; i <= n; i++)
    {
        printf("%d, ", series);
        term1 = term2;
        term2 = series;
        series = term1 + term2;
    }

    return 0;
}