#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int base = 1;
    for (int i = 1; i <= 4; i++)
    {
        sum = sum + (base * 3);
        printf("%d ", sum);
        base = base * 10;
    }
    
    return 0;
}
