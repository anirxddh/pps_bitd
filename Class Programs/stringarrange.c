/*
Program: String Arrangement.
Course: Programming for Problem Solving (PPS)
Semester: 2nd
Institute: BIT Mesra
Description: Program to arrange strings in alphabetical order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character left by scanf

    char names[n][50]; // Assuming max length of each name is 49 characters
    char temp[50];

    // Accept names
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++)
    {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0; // Removing trailing newline character
    }

    // Sorting names using Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}