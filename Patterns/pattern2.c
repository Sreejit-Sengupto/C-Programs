#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++) // The number of times the outer loop goes.
    {
        for (int j = 1; j <= i; j++) // The number of columns in a row. For e.g. if row = 1, then number of column = 1. Hence one star will be printed.
        {
            printf("*");
        }
        printf("\n"); // Printing a new line after a row has been printed.
    }
    
    return 0;
}
