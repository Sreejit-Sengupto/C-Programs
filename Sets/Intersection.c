#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 4, 5};
    // int c[sizeof(b) / sizeof(b[0])];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i] - b[j] == 0)
            {
                // c[i] = a[i];
                printf("%d ", a[i]);
            }
        }
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", c[i]);
    // }

    return 0;
}
