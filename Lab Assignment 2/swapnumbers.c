// QUESTION 5

/*
Program: Swapping Two Numbers.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to swap two numbers using a temporary variable.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%i", &a);
    printf("Display the first number is: %i \n", a);

    printf("Enter the second number: ");
    scanf("%i", &b);
    printf("\n Display the first number is: %i \n", b);

    c = a;
    a = b;
    b = c;

    printf("The new number in a is %i \n", a);
    printf("The new number in b is %i \n", b);

    return 0;
}