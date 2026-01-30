/*
Program: Perfect Number Checker.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a number is a perfect number.
*/

#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int rem = 0;
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    int OriginalNum = num;

    for (i = 1; i < num; i++)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }

    if (OriginalNum == sum)
    {
        printf("The number is a perfect number \n");
    }
    else
    {
        printf("The number is not a perfect number \n");
    }

    return 0;
}