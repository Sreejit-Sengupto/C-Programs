#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 5; i > 0; i--) // The number of times the outer loop goes. It's starting from 5 and going till 0 because we need 5 columns in the first row itself.
    {
        int spaces = 5 - i; // Number of spaces = 0, in the first row and 1 in 2nd therefore using this to formulate number of spaces to be printed before the actual pattern.
        for (int s = 0; s < spaces; s++) // Loop for printing the spaces before printing the actual pattern.
        {
            printf(" ");
        }

        for (int j = 1; j <= 2*i - 1; j++) // To get the proper 'V' shape we need spaces that is equal to 2 times row - 1. Hence the number of columns = 2*row - 1;
        {
            if (j == 1 || j == 2*i - 1) // If the column is first or last for a particular row.
            { 
                printf("*"); // Then print the star.
            }
            else
            {
                printf(" "); // Else print an empty space
            }
        }
        printf("\n"); // Printing a new line after a row has been printed.
    }

    return 0;
}
