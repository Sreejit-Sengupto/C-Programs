#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes(for number of rows).
    {
        int spaces = 5 - i; // The number of spaces before printing the oattern is equal to the number of rows - current row.
        for (int s = 1; s <= spaces; s++)
        {
            printf(" "); // Printing spaces before the pattern
        }
        for (int j = 1; j <= i; j++) // The number columns required to print the number.
        {
            printf("%d", j); // Printing the number.
        }
        printf("\n"); // Printing a new line after each row has been printed.
    }

    return 0;
}
