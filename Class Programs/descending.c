/*
Program: Descending Order
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to sort an array in descending order and display the sorted array.
*/

#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int num[30];

    printf("Enter the size of array \n");
    scanf("%d", &n);

    /*array input*/
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

    /*Sorting the elements in descending order*/
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] <= num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Sorted Array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}