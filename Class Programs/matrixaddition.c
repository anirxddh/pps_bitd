/*
Program: 2D Array Matrix Addition.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to add two matrices.
*/

#include <stdio.h>

int main()
{
    int m, n, k, l;
    int i, j;

    printf("Enter the number of rows you want: \n");
    scanf("%d", &m);

    printf("Enter the number of column you want: \n");
    scanf("%d", &n);

    int matrix1[m][n];
    int matrix2[m][n];

    int sum[m][n];

    /*Entering the elements in the matrix*/

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elements in the matrix 1: \n");
            scanf("%3d", &matrix1[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elements in the matrix 2: \n");
            scanf("%3d", &matrix2[i][j]);
        }
    }

    /*Calculating Sum of the Matrices*/

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    /*Displaying the Elements in the matrix 1 in the matrix form*/
    printf("Displaying Matrix 1: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix1[i][j]);
        }
        printf("\n");
    }

    /*Displaying the Elements in the matrix 2 in matrix form*/
    printf("Displaying Matrix 2: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix2[i][j]);
        }
        printf("\n");
    }

    /*Displaying the Sum in the matrix form*/
    printf("Displaying Sum of the two Matrices 1 & 2: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}