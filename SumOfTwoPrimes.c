/* Check if a number is sum of two primes or not */
#include <stdio.h>
int isPrime(int); // Initializing function for checking if the number is prime or not.
int sumOfPrime(int); // Initializing function for checking if the number is sum of two prime numbers or not.
void main()
{
    // User Input
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    if (sumOfPrime(n) == 1) 
    {
        printf("\n"); // If the number is sum of two primes printing a new line. The appropriate message will be printed in the respective function.
    }
    else
    {
        printf("False: No such numbers exists");
    }
    

}

int sumOfPrime(int n)
{
    for (int i = 1; i < n; i++) // A for loop, which goes from 1 till the number 'n'
    { 
        if (isPrime(i) == 1)
        {
            int num2 = n - i; // If the number 'i' is prime then subtract it from 'n' to get the other number.
            if (num2 != i && isPrime(num2) == 1)
            {
                if (num2 + i == n) // If the second number is prime as well, then check if their sum is equal to the number 'n' or not.
                {
                    printf("The numbers are %d and %d ", i, num2); //If the above condition is true then return 1, and print an appropriate message.
                    return 1;
                }
            }
        }
    }
    return 0; // Else return zero.
}


// Function for checking if the number is prime or not.
int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int c = 2;
    while (c < n)
    {
        if (n % c == 0)
        {
            return 0;
        }
        c++;
    }
    return 1;
}