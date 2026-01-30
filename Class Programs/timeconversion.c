/*
Program: Time Conversion.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to convert time in seconds to hours, minutes, and seconds.
*/

#include <stdio.h>

int main()
{
    int timeseconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: \n");
    scanf("%d", &timeseconds);

    hours = (timeseconds / 3600);
    minutes = (timeseconds - (hours * 3600)) / 60;
    seconds = (timeseconds - (hours * 3600) - (60 * minutes));

    printf("Hours:Minutes:Seconds - %d:%d:%d \n", hours, minutes, seconds);

    return 0;
}