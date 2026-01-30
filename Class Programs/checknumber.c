/*
Program: Check Number Positive, Negative or Zero.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to check whether a number is positive, negative or zero.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the a number in the variable: \n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Number is Zero \n");
    }
    else if (num < 0)
    {
        printf("Number is Negative (-ve) \n");
    }
    else
    {
        printf("Number is Positive (+ve) \n");
    }
    return 0;
}