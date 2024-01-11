#include <stdio.h>
 
// declaring a global variable
int var = 3;
 
void func()
{
    // declaring a local variable
    int var = 70;
    
    printf("The value of local var is: %d \n", var);
    
    // creating a scope
    {
        // using the extern keyword
        extern int var;
        
        printf("The value of global var using extern keyword is: %d \n", var);
    }
}

int main()
{
    // calling func()
    func();
    
    return 0;
}