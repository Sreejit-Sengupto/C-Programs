#include <stdio.h>
int getMax(int array[], int start, int end)
{
    int max = start;
    for (int i = start; i <= end; i++)
    {
        if (array[i] > array[max])
        {
            max = i;
        }
        return max;
    }
    
}

void swap(int* array[], int* first, int* last)
{
    int* temp = *array[first];
    *array[first] = *array[last];
    *array[last] = *temp;
}

int main(int argc, char const *argv[])
{
    int array[10] = {1, 5, 7, 2, 8, 10, 3 ,41, 11, 9};

    for (int i = 0; i < 10; i++)
    {
        int lastIndex = 9 - i;
        int maxIndex = getMax(array, 0, lastIndex);
        swap(array, maxIndex, lastIndex);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}
