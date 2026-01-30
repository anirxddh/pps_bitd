/*
Program: Calendar.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to display the name of a month based on its number.
*/

#include <stdio.h>

int main()
{
    int choice;
    printf("Enter the month number you want to know the name of: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("January \n");
        break;
    case 2:
        printf("Feburary \n");
        break;
    case 3:
        printf("March \n");
        break;
    case 4:
        printf("April \n");
        break;
    case 5:
        printf("May \n");
        break;
    case 6:
        printf("June \n");
        break;
    case 7:
        printf("July \n");
        break;
    case 8:
        printf("August \n");
        break;
    case 9:
        printf("September \n");
        break;
    case 10:
        printf("October \n");
        break;
    case 11:
        printf("November \n");
        break;
    case 12:
        printf("December \n");
        break;
    default:
        printf("Invalid choice! There are only 12 months in a year!");
        break;
    }
    return 0;
}