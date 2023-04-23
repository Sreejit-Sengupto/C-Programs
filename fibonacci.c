//! Fibonacci Series: 0 1 1 2 3 5 8 13......
//? The first two numbers of the series being known, the rest of the series proceeds as the sum of previous two elements of the series.
//eg: 4th number of the series i.e. 2 is equal to the sum of previous two elements that is 2nd and 3rd number of the series i.e. 1 and 1 respectively.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //* User input.
    int n;
    printf("Enter the number upto which the series is to printed: ");
    scanf("%d", &n);

    // Since the first two number of fibonacci series is already known therefore storing them under a variable.
    int a = 0;     // First fibonacci number.
    int b = 1;     // Second fibonacci number.
    int count = 2; // Since the first two number of fibonacci series is already known, therefore our count starts from 2.

    // Printing first two fibonacci numbers.
    printf("0 ");
    printf("1 ");

    // While our count variable is less than the user entered number, the fibonacci numbers will be calculated and displayed.
    while (count < n)
    {
        int temp = a + b; // Storing the sum of previous two fibonacci numbers in a temporary variable.
        a = b;            // Now current value of 'a' becomes the previous value of 'b'.
        b = temp;         // Similarly, current value of 'b' becomes the sum of previous values of 'a' and 'b'
        count++;          // Incrementing count.
        printf("%d ", b); // Printing the series.
    }

    return 0;
}
