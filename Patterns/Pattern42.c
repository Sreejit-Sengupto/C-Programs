#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5 - i + 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    

    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
