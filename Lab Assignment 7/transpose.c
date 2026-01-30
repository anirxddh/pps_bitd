/*
Program: Transpose of a Matrix.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate transpose of a matrix.
*/

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the square matrix (n x n): \n");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    // Input elements in the matrix
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the original matrix
    printf("\n The entered matrix is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    // Displaying the transpose of the matrix
    printf("\n The transpose of the matrix is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
