#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes.
    {
        for (int j = 1; j <= 5; j++) // The number of columns will be same as the number of rows.
        {
            if (j == 1 || j == i || j == 5) // If the column number is first, last or equal to the row number
            {
                printf("*"); // Printing '*'
            }
            else
            {
                printf(" "); // Else printig an empty space.
            }
        }
        printf("\n"); // Printing a new line after a row has been printed.
    } 
    
    return 0;
}
