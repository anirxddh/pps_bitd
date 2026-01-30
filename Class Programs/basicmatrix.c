/*
Program: Basic Matrix Input and Display
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to input and display a matrix.
*/

#include <stdio.h>

int main()
{
    int m, n;
    int i, j;

    printf("Enter the number of rows you want: \n");
    scanf("%d", &m);

    printf("Enter the number of column you want: \n");
    scanf("%d", &n);

    int matrix[m][n];

    /*Entering the elements in the matrix*/

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elements in the matrix: \n");
            scanf("%3d", &matrix[i][j]);
        }
    }

    /*Displaying the Elements in the matrix form*/

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}