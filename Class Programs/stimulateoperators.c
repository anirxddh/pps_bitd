/*
Program: Stimulate Operators.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to make a menu like program to simulate basic arithmetic operations.
*/

#include <stdio.h>

int main()
{
    int add = 0, sub = 0, div = 0, mult = 0;
    int a, b;
    int choice;

    printf("Enter the number in a & b respectively: \n");
    scanf("%d %d", &a, &b);

    printf("Enter your Choice of Operation: \n");
    printf("1. Addition (+) \n");
    printf("2. Substraction (-) \n");
    printf("3. Multiplication (*) \n");
    printf("4. Division (/) \n");
    printf("Enter a number between (1-4) \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        add = a + b;
        printf("Your Addition Operation Result is: %d \n", add);
    }
    break;

    case 2:
    {
        sub = a - b;
        printf("Your Substraction Operation Result is: %d \n", sub);
    }
    break;

    case 3:
    {
        mult = a * b;
        printf("Your Multiplication Operation Result is: %d \n", mult);
    }
    break;

    case 4:
    {
        if (b != 0)
        {
            div = a / b;
            printf("Your Division Operation Result is: %d \n", div);
        }
        else
        {
            printf("Number can't be divided by 0");
        }
    }
    break;

    default:
        printf("Your choice is invalid!");
        break;
    }

    return 0;
}