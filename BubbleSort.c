#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {2, 8, 5, 4, 1};

    //* Printing the original array.
    printf("The original array is: \n");
    printf(" [");
    for (int elements = 0; elements < 5; elements++)
    {
        printf("%d ", array[elements]);
    }
    printf("]\n");
    

    int isSwapped; // For checking if the array is sorted or not (Preventing multiple checks in case the array gets sorted in one go or is already sorted.)

    for (int i = 0; i < 5; i++) // For loop to track counter.
    {
        isSwapped = 0; // Changing the value to zero if the value of isSwapped turns to 1.
        for (int j = 1; j < 5 - i; j++)
        {
            if (array[j] < array[j - 1]) // Checking if the previous element is smaller than the current element or not.
            {
                // Swapping the values.
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
                isSwapped = 1; // Changing the value of isSwapped to 1 so that the loop executes for further elements.
            }
        }
        if (isSwapped == 0) // If the values are not swapped then it means the array is already sorted. Hence no need to check for further elements, therefore break the loop.
        {
            break;
        }
    }

    //* Printing the sorted array.
    printf("The sorted array is as follows:\n");
    printf(" [");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ", array[k]);
    }
    printf("]\n");

    return 0;
}
