#include <stdio.h>
#include <stdlib.h>
int digitSum(int);
int totalDigit(int);
int main(int argc, char const *argv[])
{
    int m;
    printf("Enter the value of m (m should be greater than 100 and less than 10000): ");
    scanf("%d", &m);
    if (m < 100 || m >= 10000)
    {
        printf("Entered value out of range\nplease enter value in between 100 and 10000");
        exit(0);
    }

    int n;
    printf("Enter the value of n (less than 100): ");
    scanf("%d", &n);
    if (n >= 100)
    {
        printf("Entered value out of range\nplease enter a value less than 100");
        exit(0);
    }

    for (int i = m; i < 10000; i++)
    {
        if (digitSum(i) == n)
        {
            printf("%d\n", i);
            printf("%d\n", totalDigit(i));
            break;
        }
    }

    return 0;
}

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    return sum;
}

int totalDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}