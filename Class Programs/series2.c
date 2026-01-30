// 1+(1+2)+(1+2+3)...... upto n

/*
Program: Series Sum Calculator.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of series 1+(1+2)+(1+2+3)...... upto n terms.
*/

#include <stdio.h>

int main()
{
    int sum = 0;
    int n;
    int i;

    printf("Enter the term limit in 'n' \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int termsum = ((i * (i + 1)) / 2);
        sum += termsum;
    }

    printf("The sum of the given series is: %d \n", sum);
    return 0;
}