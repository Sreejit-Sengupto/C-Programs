#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 7;
    int array[] = {1, 2, 3, 4, 5};
    int* arrPtr = array;
    int* ptr = &a;
    printf("The value of a is: %d\n", a);
    printf("The address of a is: %d\n", &a);
    printf("The value of a using pointers is: %d\n", *ptr);
    printf("The address of a using pointers is: %d\n", ptr);
    printf("Using increment operation on pointer: %d\n", ptr+1);
    printf("\n");
    printf("The memory address of the array using pointers is: %d\n", ptr);
    printf("The memory address of the array is: %d\n", &array[0]);
    return 0;
}
