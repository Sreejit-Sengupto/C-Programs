#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = 3; i >=1 ; i--)
    {
        for (int j = 1; j<= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    
    return 0;
}
