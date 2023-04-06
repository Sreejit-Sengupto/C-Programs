#include <stdio.h>
#include <string.h>

void handleString(char str[])
{
    //* Counting number of words
    int count = 0;      // To store number of words in the String.
    int indexSpace = 0; // To store the index of the space.

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 32) // ASCII of Blank Space = 32.
        {
            count++; // Counting number of words.
        }
    }

    // If number of words is greater than or less than two, then showing appropriate message.
    if (count > 1 || count < 1)
    {
        printf("!Caution: Enter only two words\n");
        return;
    }
    // If number of words is equal to two, then performing required operations.
    else
    {
        //* Converting first letter of the String to Uppercase
        if (str[0] >= 97 && str[0] <= 122)
        {
            str[0] -= 32; // eg: 97(a) - 32  = 65(A)
        }

        //* Converting all the letters of second word to Uppercase
        // First storing the index of Blank Space in a variable.
        for (int i = 1; i < strlen(str); i++)
        {
            if (str[i] == 32)
            {
                indexSpace = i;
                break;
            }
        }
        // Converting all the characters after Blank Space to UpperCase.
        for (int j = indexSpace + 1; j < strlen(str); j++)
        {
            str[j] -= 32;
        }
        printf("%s\n", str); // Printing the modified String.

        //* Reversing the String
        int start = 0;
        int end = strlen(str) - 1;
        while (start < end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        printf("%s\n", str);                               // Printing the Reversed String.
        printf("Length of the String is %d", strlen(str)); // Printing the Length of the String.
    }
}

int main(int argc, char const *argv[])
{
    //* User Input
    char str[100];
    printf("Enter the 2 word sentence\n");
    gets(str);

    // Calling handleString()
    handleString(str);
    return 0;
}
