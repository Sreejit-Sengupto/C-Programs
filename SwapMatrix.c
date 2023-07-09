/* Program to swap first and last row of a Matrix */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mat[4][4];
    printf("Enter elements in the matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }


    for (int col = 0; col < 4; col++)
    {
        int temp = mat[0][col];
        mat[0][col] = mat[3][col];
        mat[3][col] = temp;
    }

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d ", mat[row][col]);
        }
        printf("\n");
    }
    
    
    return 0;
}