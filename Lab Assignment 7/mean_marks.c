/*
Program: Mean Marks of Students.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate mean marks of students and display marks greater than mean.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int mean = 0;
    int sum = 0;
    int marks[60];
    int n;
    int i;

    printf("Enter the number of students: \n");
    scanf("%d", &n);

    printf("Enter the marks of the students respectively in out of 100 marks: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    mean = sum / n;

    printf("The mean of the students are: %d \n", mean);

    int found = 0;
    printf("The marks which are greater than mean are: \n");
    for (i = 0; i < n; i++)
    {
        if (mean < marks[i])
        {
            printf("%d \n", marks[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No Marks greater than mean found: \n");
    }

    return 0;
}