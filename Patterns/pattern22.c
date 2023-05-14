#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes.
    {
        for (int j = 1; j <= i; j++) // The number of columns in a row. For e.g. if row = 1, then number of column = 1.
        {
            if (i % 2 == 0) // If the row number is even.
            {
                if (j % 2 == 0) // Then for even places (columns)
                {
                    printf("1"); // Print '1'
                } 
                else
                {
                    printf("0"); // Else print '0'
                }
            }
            else
            {
                if (j % 2 == 0) // If row number is odd, then in even places (columns)
                {
                    printf("0"); // Print '0'
                }
                else
                {
                    printf("1"); // Print '0'
                }
            }
        }
        printf("\n");  // Printing a new line after a row has been printed.
    }
    return 0;
}
