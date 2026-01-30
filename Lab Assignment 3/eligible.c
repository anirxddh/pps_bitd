/*
Program: Eligibility to Vote.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a person is eligible to vote based on age.
*/

#include <stdio.h>

int main()
{
    int age;
    char name[100];

    printf("Enter your full name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age in numbers: \n");
    scanf("%d", &age);

    printf("Your Full Name is: %s", name);

    if (age < 18)
    {
        printf("Not Eligible to vote, grow up!");
    }
    else
    {
        printf("Eligible to vote, congratulations!");
    }
    return 0;
}