#include <stdio.h>
void binary(int n) {
    if (n == 0)
    {
        return;
    }
    binary(n / 2);
    printf("%d", n%2);
}

int main(int argc, char const *argv[])
{
    binary(33);
    return 0;
}
