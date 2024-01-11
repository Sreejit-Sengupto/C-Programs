#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        int spaces = 5 - i;
        for (int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
