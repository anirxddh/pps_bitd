/*
Program: Palindrome Number Checker.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a given number is a palindrome number.
*/



#include <stdio.h>

int main()
{
    int num;
    int OriginalNum = 0;
    int rem = 0;
    int revNum = 0;

    printf("Enter the Number for which you want to check Palindrome: \n");
    scanf("%d", &num);

    OriginalNum = num;

    while (num != 0)
    {
        rem = num % 10;
        revNum = (revNum * 10) + rem;
        num = num / 10;
    }

    if (OriginalNum == revNum)
    {
        printf("The Number is Palindrome Number \n");
    }
    else
    {
        printf("The Number is not Palindrome Number \n");
    }
    return 0;
}