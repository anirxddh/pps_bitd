/*
Program: Prime Number Checker.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a given number is a prime number.
*/

#include <stdio.h>

int main()
{
    int num;
    int i;
    int count = 0;

    printf("Enter the number which you want to check for prime number: \n");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("0 and 1 are neither composite number nor prime number. \n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }

        if (count == 2)
            printf("The number is prime \n");
        else
            printf("Number is not prime \n");
    }
    return 0;
}