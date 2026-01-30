/*
Program: Sum of Odd Numbers.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of odd numbers in an array.
*/

#include <stdio.h>

int main()
{
    int sum = 0;
    int i, n;
    int num[30];

    printf("Enter the limit of the array \n");
    scanf("%d", &n);

    /*Entering elements in the array*/
    printf("Enter the elements in array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    /*array display*/
    printf("Elements in array are: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n");

    /*Finding the sum of odd numbers*/
    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 != 0)
        {
            sum = sum + num[i];
        }
    }

    /*sum display*/
    printf("Sum of all the odd numbers are: %d \n", sum);

    return 0;
}