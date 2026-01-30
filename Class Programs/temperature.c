/*
Program: Temperature Conversion.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to convert temperature from Centigrade to Fahrenheit and vice versa.
*/

#include <stdio.h>

int main()
{
        int choice;
        float temp;
        float newtemp;

        printf("Temperature Conversion Menu \n");
        printf("1. Convert Centigrade to Fahrenheit \n");
        printf("2. Convert Fahrenheit to Centigrade \n");
        printf("Enter your choice for conversion of temperature: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
                printf("You have selected choice 1. Convert Centigrade to Fahrenheit \n");
                printf("Enter your temperature in Centigrade: \n");
                scanf("%f", &temp);
                newtemp = (temp * (9.0 / 5.0)) + 32;
                printf("Temperature in degree Centigrades is: %2f \n", temp);
                printf("New Converted temperature in degree Farhenheit is: %2f \n", newtemp);
                break;
        }

        case 2:
        {
                printf("You have selected choice 2. Convert Fahrenheit to Centigrade \n");
                printf("Enter your temperature in Fahrenheit: \n");
                scanf("%f", &temp);
                newtemp = (temp - 32) * (5.0 / 9.0);
                printf("Temperature in degree Fahrenheit is: %2f \n", temp);
                printf("New Converted temperature in degree Centigrade is: %2f \n", newtemp);
                break;
        }

                {
                default:
                        printf("The choice is invalid! Enter a valid choice.");
                }
        }
        return 0;
}