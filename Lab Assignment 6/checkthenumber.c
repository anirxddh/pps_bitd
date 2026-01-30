/*
Program: Check if a number is positive, negative, or zero.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a number is positive, negative, or zero.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number you want to check: \n");
    scanf("%d", &num);

    int condition = (num > 0) - (num < 0);

    switch (condition)
    {
    case -1:
        printf("number is negative. \n");
        break;
    case 0:
        printf("number is Zero. \n");
        break;
    case 1:
        printf("number is positive. \n");
        break;

    default:
        printf("The input is invalid. \n");
        break;
    }
    return 0;
}