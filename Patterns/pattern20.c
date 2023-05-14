#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes.
    { 
        if (i == 1 || i == 5) // If the row is first or last then print the stars entirely.
        { 
            for (int j = 1; j <= 4; j++) // Printing the stars in each column of first and last row
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= 4; j++)
            {
                if (j == 1 || j == 4) // If row is other than first or last then printing the stars in first and last columns only.
                {
                    printf("*");
                }
                else
                {
                    printf(" "); // If column is not first or last then print empty space.
                }
            }
        }

        printf("\n"); // Printing a new line after a row has been printed.
    }

    return 0;
}
