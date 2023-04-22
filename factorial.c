#include <stdio.h>

int facNum(int n) {
    if (n == 1) // Base condition, recursive calls break when n becomes 1.
    {
        return n;
    }
    return n * facNum(n - 1); // Recurence relation factorial of a number n = that number * factorial of (number - 1).
}

int main(int argc, char const *argv[])
{
    int n = 5;
    int factorial = 1; // Variable for calculating factorial.

    for (int i = 1; i <= n; i++) // For loop from 1 to that number.
    {
        factorial *= i; // Multiplying the numbers from 1 to 5.
    }
    
    printf("Factorial of %d is %d \n", n, factorial); // Printing the factorial calulated using for loop. 

    int ans = facNum(n); // Storing the value returned from facNum() function.
    printf("Factorial of %d using recursion is %d", n, ans); // Printing the ans.
    return 0;
}

