/*
Program: Solve the given mathematical expression.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate the value of a mathematical expression for a range of x values.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;

    printf("x \t \t y \n");
    printf("------------------- \n");

    for (x = 1.0; x <= 3.0; x += 0.2)
    {
        y = 1.36 * sqrt((1) + x + pow(x, 3)) + pow(x, (1 / 4)) + exp(x);
        printf("%.2f \t \t %.2f \n", x, y);
    }

    return 0;
}