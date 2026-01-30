/*
Program: Check if a Matrix is Symmetric.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to check if a matrix is symmetric.
*/

#include <stdio.h>

int main()
{
    int n, i, j, isSymmetric = 1;

    printf("Enter the size of the square matrix (n x n): \n");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements in the matrix
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Displaying the matrix
    printf("\n The entered matrix is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    // Output result
    if (isSymmetric)
    {
        printf("\n The matrix is symmetric. \n");
    }
    else
    {
        printf("\n The matrix is not symmetric. \n");
    }

    return 0;
}
