/*
Program: Sum and Average of Numbers in an Array.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum and average of numbers in an array.
*/

#include <stdio.h>

int main()
{
    int n;
    int arr[30];
    int i, sum = 0, average = 0;

    printf("Enter the limit of the array: \n");
    scanf("%d", &n);

    printf("Enter the elements of the array one by one: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    average = (sum) / n;

    printf("The sum of n numbers is: %d \n", sum);
    printf("The average of n numbers is: %d \n", average);
    return 0;
}