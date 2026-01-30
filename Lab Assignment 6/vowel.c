/*
Program: Vowel or Consonant Checker.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a character is a vowel or consonant.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character in ch: \n");
    scanf("%s", &ch);

    switch (ch)
    {
    case 'A':
        printf("The entered input is a vowel. \n");
        break;
    case 'E':
        printf("The entered input is a vowel. \n");
        break;
    case 'I':
        printf("The entered input is a vowel. \n");
        break;
    case 'O':
        printf("The entered input is a vowel. \n");
        break;
    case 'U':
        printf("The entered input is a vowel. \n");
        break;
    case 'a':
        printf("The entered input is a vowel. \n");
        break;
    case 'e':
        printf("The entered input is a vowel. \n");
        break;
    case 'i':
        printf("The entered input is a vowel. \n");
        break;
    case 'o':
        printf("The entered input is a vowel. \n");
        break;
    case 'u':
        printf("The entered input is a vowel. \n");
        break;

    default:
        printf("The entered input is a consonant. \n");
        break;
    }

    return 0;
}