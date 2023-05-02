#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes(for number of rows).
    {
        int spaces = 5 - i; // The number of spaces before printing the oattern is equal to the number of rows - current row.
        for (int s = 0; s < spaces; s++)
        {
            printf(" "); // Printing spaces before the pattern
        }

        for (int j = 1; j <= 2 * i - 1; j++) // Number of pattern to be printed in a row = 2*row - 1
        {
            if (i != 5) // Since we need to print the entire last row therefore, skipping it and printing the remaining rows.
            {
                if (j == 1 || j == 2 * i - 1) // Pattern will only be printed in 1st and last column of the particular row.
                {
                    printf("*"); // Printing the pattern.
                }
                else
                {
                    printf(" "); // Printing empty space in rest of the columns.
                }
            }
        }
        if (i == 5) // For the last row
        {
            for (int k = 1; k <= 9; k++) // Printing '*' in the entire last row.
            {
                printf("*");
            }
        }
        printf("\n"); // Printing a new line after each row has been printed.
    }

    return 0;
}
