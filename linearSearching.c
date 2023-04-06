#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5, 6};              // Array to perform linear searching on
    int target = 3;                                // Value to be searched.
    int length = sizeof(array) / sizeof(array[0]); /* Calculating size of the array. Number of elements  = Size of 'n' elements/ Size of one element */

    for (int i = 0; i < length; i++)
    {
        if (array[i] == target) // Iterating over the array. If value found printing appropriate message.
        {
            printf("Element found at %d\n", i);
        }
    }

    return 0;
}
