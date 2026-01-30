/*
Program: Grading System.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to assign grades based on marks obtained.
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks you got in out of 100: \n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A+! Congratulations! You are a topper.");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Your grade is A! Well Done!");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Your grade is B! Congratulations! Better Luck Next Time!");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Your grade is C! Satisfactory!");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Your grade is D! You need to Work Hard!");
    }
    else if (marks >= 40 && marks < 50)
    {
        printf("Your grade is E! You need to work the hardest!");
    }
    else
    {
        printf("Your grade is F! You have Failed!");
    }
    return 0;
}