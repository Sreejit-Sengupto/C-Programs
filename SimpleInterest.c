#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // User input
    // Principle
    int p;
    printf("Enter the amount on which interest is to be calculated: \n");
    scanf("%d", p);

    // Rate
    int r;
    printf("Enter the rate of interest: \n");
    scanf("%d", r);

    // Time
    int t;
    printf("Enter the time: \n");
    scanf("%d", t);

    // Number of times the interest is compounded anually.
    int n;
    printf("Number of times the interest is compounded anually: \n");
    scanf("%d", n);

    int si = p * r * t / 100;                 // Simple interest.
    int ci = p * pow((1 + r / n), n * t) - p; // Compound interest.

    printf("The simple interest on your priciple is: %d\n", si);
    printf("The compound interest on your priciple is: %d\n", ci);
    return 0;
}