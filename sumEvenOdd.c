#include <stdio.h>

// Function to check if a number is even or odd
int isEven(int n)
{
    int flag = 0; // Using this variable as a flag, if the number is even then it will be changed to 1.
    if (n%2 == 0) // Condition for a number to be even.
    {
        flag = 1;
    }
    return flag;
}

int main(int argc, char const *argv[])
{
    //* User input.
    int n;
    printf("Enter the number upto which the sum of even and odd numbers is to be calculated: ");
    scanf("%d", &n);

    int evenSum = 0; // To store sum of even numbers upto 'n'.
    int oddSum = 0; // To store sum of odd numbers upto 'n'.

    for (int i = 1; i <= n; i++) // Iterating from 1 to that number.
    {
        if (isEven(i) == 1) // Checking if the number is even or not.
        {
            evenSum += i; // Adding it to evenSum variable if the number is even.
        }
        else
        {
            oddSum += i; // Else, adding the number to oddSum variable.
        }
        
    }

    // Printing appropriate messages.
    printf("Sum of even numbers upto %d is: %d\n", n, evenSum);
    printf("Sum of odd numbers upto %d is: %d\n", n, oddSum);
    
    return 0; 
}
