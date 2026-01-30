/*
Program: Sum of Even Numbers.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to calculate sum of first n even numbers.
*/

#include <stdio.h>

int main()
{
    int sum = 0;
    int num;
    // int i;
    int i = 1;

    printf("Enter the number of terms you want to add \n");
    scanf("%d", &num);

    // for statement
    //  for (i = 1; i <= num; i++)
    //  {
    //      sum = sum + (2 * i);
    //  }

    // while statement
    //  while(i<=num)
    //  {
    //      sum = sum + (2 * i);
    //      i++;
    //  }

    // do-while statement
    //  do
    //  {
    //      sum = sum + (2 * i);
    //      i++;
    //  }
    //  while (i <= num);

    printf("The sum of n number of even numbers is: %d \n", sum);
    return 0;
}
