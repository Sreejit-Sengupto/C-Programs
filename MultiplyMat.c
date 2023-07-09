/* Multiply two matrix */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row1, col1, row2, col2;
    printf("Enter the dimensions of the first array\n");
    printf("Enter number of rows\n");
    scanf("%d", &row1);
    printf("Enter number of columns\n");
    scanf("%d", &col1);

    printf("Enter the dimensions of the second array\n", row1 * col1);
    printf("Enter number of rows\n");
    scanf("%d", &row2);
    printf("Enter number of columns\n");
    scanf("%d", &col2);

    if (col1 == row2)
    {
        int result[row1][col2];
        int mat1[row1][col1];
        int mat2[row2][col2];
        int i, j;

        printf("Enter %d elements in the first array:\n", row1 * col1);
        for (i = 0; i < row1; i++)
        {
            for (j = 0; i < col1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("Enter %d elements in the second array:\n", row2 * col2);
        for (i = 0; i < row2; i++)
        {
            for (j = 0; i < col2; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d", &result[i][j]);
            }
            printf("\n");
        }
        
    }

    return 0;
}
