/*
Program: Reverse of a Number.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to reverse a given number.
*/

#include <stdio.h>

int main()
{
    int i;
    int revsum = 0;
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
            revsum = (revsum * 10) + rem;
            num = num / 10;
        }
    }

    printf("The original number is: %d \n", OriginalNum);
    printf("Reverse of the number is: %d \n", revsum);

    return 0;
}