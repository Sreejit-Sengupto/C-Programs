/* Program to transpose a matrix */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[3][3];
    printf("Enter the elements in the array");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    // Printing the Original array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
        
    }
    

    // Printing the transposed array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
