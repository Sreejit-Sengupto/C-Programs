#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++) // The number of times the outer loop goes.
    {
        for (int j = 0; j < 5; j++) // For each row print the star in that column. Eg: If row = 1, then print 5 '*' in that row.
        {
            printf("*");
        }
        printf("\n"); // Printing new line after a row has been printed.
    }
    
    return 0;
}
