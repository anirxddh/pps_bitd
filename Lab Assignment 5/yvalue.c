/*
Program: Value of Y(x,n).
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate value of Y(x,n) for given values of x and n.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    int Y = 0;

    printf("Enter the value of x variable: \n");
    scanf("%d", &x);

    printf("Enter the value of n which you want to calculate: \n");
    scanf("%d", &n);

    if (n == 1)
    {
        Y = 1 + n;
    }
    else if (n == 2)
    {
        Y = 1 + (x / n);
    }
    else if (n == 3)
    {
        Y = 1 + pow(x, n);
    }
    else
    {
        Y = 1 + n * x;
    }

    printf("The value of Y(x, n) is Y(%d, %d) = %d", x, n, Y);
    return 0;
}