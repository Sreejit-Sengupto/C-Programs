#include <stdio.h>

int isPrime(int n) // Function to check for Prime
{
    int c = 2;         // Maintaining this variable to check for prime numbers by dividing the user given number by this number.
    while (c * c <= n) // Optimizing search space to check for prime.
    {
        if (n % c == 0) // If at any point the user given number is divisible by any other number except one and itself, then returning 0(false)
        {
            return 0;
        }
        c++; // Incrementing 'c' to check if the next number divides the user entered number or not.
    }
    return 1; // Returning 1(true) if above case fails. Which means that the user entered number is not divisible by any other number except one and itself.
}

int main(int argc, char const *argv[])
{
    int c = 2;                   // Number to be checked for Prime.
    for (int i = 1; i <= 5; i++) // For loop to maintain rows
    {
        for (int j = 1; j <= i; j++) // For loop to maintain columns.
        {
            if (isPrime(c)) // If the number is prime. Print it.
            {
                printf("%d ", c); // Print the value if it is prime.
            }
            else
            {
                j--; //! Revert back to previous value of j if c is not a prime number.
            }
            c++;
        }
        printf("\n"); // Printing a new line after each row.
    }

    return 0;
}
