/* Reverse each element of the Matrix */
#include <stdio.h>

int reverse(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int mat[4][4];
    printf("Enter elements in the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int row = 0; row < 3; row++)
    {
        printf("[");
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", reverse(mat[row][col]));
        }
        printf("]");
        printf("\n");
    }

    return 0;
}