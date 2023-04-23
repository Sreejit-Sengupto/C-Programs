#include <stdio.h>

int main(int argc, char const *argv[])
{
    //* User input
    char ch;
    printf("Enter the operator: \n");
    scanf("%c", &ch);

    int num1;
    printf("Enter the first number \n");
    scanf("%d: ", &num1);

    int num2;
    printf("Enter the second number \n");
    scanf("%d", &num2);


    switch (ch)
    {
    case '+':
        printf("Sum = %d", num1 + num2);
        break;

    case '-':
        printf("Difference = %d", num1 - num2);
        break;

    case '*':
        printf("Product = %d", num1 * num2);
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Error! Dividing by zero.");
        }
        else
        {
            printf("Division = %d", num1/num2);
        }
        break;

    default:
        printf("Invalid operator!!");
        break;
    }
    return 0;
}
