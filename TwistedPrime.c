/* Twisted prime: The reverse of the number is prime as well */
#include <stdio.h>

// Function to check if a number is prime or not.
int isPrime(int n)
{
    int c = 2;
    int flag = 0;
    while (c * c <= n)
    {
        if (n % c == 0)
        {
            flag = 1;
            break;
        }
        c++;
    }
    return flag;
}

// Function to reverse a number.
int reverse(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    return sum;
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    if (isPrime(n) == 0 && isPrime((reverse(n))) == 0) // If the number as well it's reverse is prime then print appropriate message.
    {
        printf("Then number is twisted prime");
    }
    else
    {
        printf("Not twisted prime");
    }
    return 0;
}
