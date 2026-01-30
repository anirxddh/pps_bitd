// QUESTION 2

/*
Program: Sum of Two Numbers.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of two numbers using while loop.
*/

#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 5, i;

    while (num2--)
    {
        num1++;
    }
    printf("Sum is: %d", num1);
    return 0;
}