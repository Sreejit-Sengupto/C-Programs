#include <stdio.h> 

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    return fibo(n - 1) + fibo(n - 2);
}

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ", fibo(i));
    }
    
    return 0;
}
