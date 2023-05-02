//* For question look at the Pattern-Question.md file

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes(for number of rows).
    {
        for (int j = 5; j >= i; j--) // The first row has columns = the number of rows. Hence the inner loop(number of columns) starts from 'n' i.e. 5.
        {
            printf("*"); // Printing the pattern.
        }
        printf("\n"); // Printing a new line after each row has been printed.
    }

    return 0;
}
