/*
Program: Sum of Series.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of series 1^2 + 2^2 + ... + n^2.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int sumofseries = 0;
    int n;
    int i;
    int temp = 0;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        temp = pow(i, 2);
        sumofseries += temp;
    }

    printf("The sum of series: %d \n", sumofseries);
    return 0;
}