/*
Program: Weekday Identifier.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to identify the weekday based on a number input (1-7).
*/

#include <stdio.h>

int main()
{
    int day;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid Number! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
