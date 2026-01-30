/*
Program: Quadratic Equation Solver.
Course: Programming for Problem Solving (PPS) Lab
Semester: 2nd
Institute: BIT Mesra
Description: Program to solve a quadratic equation and find its roots.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float D;
    float x1, x2;

    printf("Enter values in a, b, c respectively: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
    {
        printf("The equation is not quadratic \n");
    }
    else
    {
        printf("The equation is quadratic, calculating Discriminant (D) \n");
        D = pow(b, 2) - 4 * a * c;

        if (D < 0)
        {
            printf("Roots are imaginary \n");
        }
        else if (D == 0)
        {
            printf("Roots are equal \n");
        }
        else
        {
            printf("Roots are real, calculating roots; \n");
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);

            printf("The roots are as follows: \n");
            printf("The root x1 is: %2f \n", x1);
            printf("The root x2 is: %2f \n", x2);
        }
    }
    return 0;
}