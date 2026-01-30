/*
Program: Armstrong Number Checker.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a given number is an Armstrong number.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;
    int num;
    int rem = 0;
    int temp = 0;
    int count = 0;

    printf("Enter the number in N to check if its Armstrong or not: \n");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) // count length
    {
        temp = temp / 10;
        count++;
    }

    temp = num; // reset

    while (temp != 0) // calculate armstrong number
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("The Number is an Armstrong Number \n");
    }
    else
    {
        printf("The Number is not an Armstrong Number \n");
    }

    return 0;
}