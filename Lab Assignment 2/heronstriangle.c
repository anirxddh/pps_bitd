// QUESTION 4

/*
Program: Heron's Formula for Triangle Area.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate area of triangle using Heron's formula.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0;
    float area = 0;
    float a, b, c;

    printf("Enter the length of side a in cms: ");
    scanf("%f", &a);
    printf("Length of side a is: %2f cms \n", a);

    printf("Enter the length of side b in cm: ");
    scanf("%f", &b);
    printf("Length of side b is: %2f cms \n", b);

    printf("Enter the length of side c in cms: ");
    scanf("%f", &c);
    printf("Length of side c is: %2f cms \n", c);

    s = (a + b + c) / 2;
    printf("Value of s: %2f cms \n", s);

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is: %2f cm^2 \n", area);

    return 0;
}