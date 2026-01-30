/*
Program: Find the largest number in an array.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to find the largest number in an array of integers.
*/

#include <stdio.h>

int main()
{
    int n;
    int arr[30];
    int i, largest = 0;

    printf("Enter the limit of the array: \n");
    scanf("%d", &n);

    printf("Enter the elements of the array one by one: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    printf("The largest number is: %d \n", largest);
    return 0;
}