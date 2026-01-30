/*
Program: Sum of Digits of a Positive Number.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of digits of a positive number using while loop.
*/

#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int rem = 0;
    int num = 0;

    printf("Enter a positive number: \n");
    scanf("%d", &num);

    int OriginalNum = num;

    if (num < 0)
    {
        printf("Enter a positive integer! Invalid Input.");
    }
    else
    {
        while (num != 0)
        {
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }
    }

    printf("The sum of the digit of the positive number %d is: %d \n", OriginalNum, sum);

    return 0;
}