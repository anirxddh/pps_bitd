// QUESTION 3

/*
Program: Hello Name.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to greet a user by name.
*/

#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);
    return 0;
}