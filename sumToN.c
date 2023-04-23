#include <stdio.h>

// Sum upto 'n' using Recursion.
int recSum(int n)
{
    if (n == 0)
    {
        return n;
    }

    return n + recSum(n - 1); // Recurrence relation sum upto number n = n + sum of the remaining numbers.
    
}

int main(int argc, char const *argv[])
{
    //* User input.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0; // To store the sum upto 'n'.
    for (int i = 1; i <= n; i++) // Iterating from 1 to that number.
    {
        sum += i; // Adding it to sum.
    }
    
    printf("Sum upto %d is equal to %d\n", n, sum); // Printing sum calculated using for loop.
    printf("Sum using recursion is equal to %d", recSum(n)); // Printing sum calculated using recursion.
    return 0;
}
