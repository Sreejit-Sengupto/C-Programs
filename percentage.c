#include <stdio.h>

int main(int argc, char const *argv[])
{
    // User inputs
    int num1;
    printf("Enter the marks of first subject: \n");
    scanf("%d", &num1);

    int num2;
    printf("Enter the marks of second subject: \n");
    scanf("%d", &num2);

    int num3;
    printf("Enter the marks of third subject: \n");
    scanf("%d", &num3);

    int num4;
    printf("Enter the marks of fourth subject: \n");
    scanf("%d", &num4);

    int num5;
    printf("Enter the marks of fifth subject: \n");
    scanf("%d", &num5);

    // Sum of the numbers
    int sum = num1 + num2 + num3 + num4 + num5;

    // Percentage of the marks
    int percentage = sum/5;

    // Printing marks and the percentage
    printf("Sum of the marks: %d\n", sum);
    printf("Percentage obtained: %d", percentage);
    return 0;
}
