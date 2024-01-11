#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter the string\n");
    gets(str);

    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] > 65 && str[i] < 90)
        {
            printf("%c", str[i]);
            break;
        }
        
    }
    
    return 0;
}
