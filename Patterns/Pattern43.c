#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int element = 2*5 - j - 1;
            printf("%d", element);
        }
        printf("\n");
    }
    
    return 0;
}
