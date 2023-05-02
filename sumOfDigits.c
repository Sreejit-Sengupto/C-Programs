#include <stdio.h>

int main(int argc, char const *argv[])
{
    //* User Input
    int n;
    printf("Enter a number: ");
    scanf("%d\n", &n);

    int sum = 0; // To store the reversed number
    while (n > 0)
    {
        int rem = n % 10;     // Extracts the last digit of the number.
        sum = sum * 10 + rem; // For reversing the number by adding the last digit extracted to the TEN's of the previous sum.
        n /= 10;              // Reducing the digit to extract the next last digit.
    }

    printf("%d", sum); // Printing the reversed number

    return 0;
}
