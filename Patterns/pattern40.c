#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i == 1)
            {
                if (j == 1 || j >= 5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            if (i >= 2 && i < 5)
            {
                if (j == 1 || j == 5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            if (i == 5)
            {
                printf("*");
            }

            if (i >= 6 && i <= 9)
            {
                if (j == 5 || j == 10)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            if (i == 10)
            {
                if (j < 6 || j == 10)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
