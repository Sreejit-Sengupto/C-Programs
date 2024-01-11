#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 4, 5};
    int size = sizeof(b) / sizeof(b[0]) + sizeof(a) / sizeof(a[0]);
    int c[size];

    int index = 0;
    while (index < 5)
    {
        c[index] = a[index];
        index++;
    }

    for (int i = 0; i < 3; i++)
    {
        c[index] = b[i];
        index++;
    }
    

    for (int i = 0; i < size; i++)
    {
        printf("%d ", c[i]);
    }
    
    return 0;
}
