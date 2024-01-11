#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int m;
    printf("Enter number of rows and columns (less than 10 and greater than 2): ");
    scanf("%d", &m);
    if (m < 2 && m > 10)
    {
        printf("Invalid number of rows and columns");
        exit(0);
    }
    int arr[10][10];
    int i, j;
    printf("Enter %d elements in the matrix\n", m * m);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("ORIGINAL MATRIX: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int ans[m][m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            ans[j][m - 1 - i] = arr[i][j];
        }
    }
    printf("ROTATED MATRIX: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == 0 || i == m - 1)
            {
                if (j == 0 || j == m - 1)
                {
                    sum = sum + ans[i][j];
                }
            }
        }
    }
    printf("Sum of corner elements = %d", sum);

    return 0;
}
