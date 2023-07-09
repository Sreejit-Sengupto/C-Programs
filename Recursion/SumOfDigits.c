#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n%10 + sumOfDigits(n/10);
}

int main(int argc, char const *argv[])
{
    printf("%d", sumOfDigits(1342));
    return 0;
}
