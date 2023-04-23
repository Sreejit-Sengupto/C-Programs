#include <stdio.h>

int main(int argc, char const *argv[])
{
    //* User input.
    int n;
    printf("Enter the number to be checked for prime");
    scanf("%d", &n);

    int c = 2; // The user entered number will be divided by this variable.

    while (c * c <= n) // Eliminating duplicate cases.
    {
        if (n % c == 0) // If at any point the user entered number is divisble by any other number, then print appropriate message and break the loop.
        {
            printf("Entered number is Not prime");
            break;
        }
        c++; // Incrementing c to check if other numbers divide the user entered number or not.
        printf("Entered number is Prime");
    }
    return 0;
}
