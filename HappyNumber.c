/*
A happy number is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.
 */

#include <stdio.h>

// Solving using recursion
int isHappyNumber(int n) 
{
    int sum = 0; // To store the sum of square of the digits entered by the user.
    if (n == 1) // Base Condition: if the number becomes one then return 1.
    {
        return 1;
    }

    if (n < 10) // If the number is less than ten
    {
        return 0; // return 0
    }

    // Extracting the sum of sqaure of the digits.
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem * rem;
        n = n / 10;
    }

    return isHappyNumber(sum); // Recursive call to check if the sum of sqaure of the digit ileads to a sum of '1' or not.
}

int main(int argc, char const *argv[])
{
    // Handling user input
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    // Printing the messages accordingly
    if (isHappyNumber(n) == 1)
    {
        printf("The entered number is Happy number");
    }
    else
    {
        printf("The entered number is not Happy number");
    }

    return 0;
}
