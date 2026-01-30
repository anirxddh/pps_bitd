// QUESTION 6

/*
Program: School Information.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to display student's school information.
*/

#include <stdio.h>

int main()
{
    char fullname[100];

    printf("Enter your full name: ");
    fgets(fullname, sizeof(fullname), stdin);

    char rollno[50];

    printf("Enter your full roll no. in proper format: ");
    fgets(rollno, sizeof(rollno), stdin);

    float m1, m2, m3;
    printf("Enter your marks in the three subjects repectively in out of 100 marks: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    float percentage;
    percentage = ((m1 + m2 + m3) / 300) * 100;

    printf("\nYour full name is: %s", fullname);
    printf("\nYour Roll Number is: %s", rollno);
    printf("\nYour Percentage is: %2f \n", percentage);

    return 0;
}