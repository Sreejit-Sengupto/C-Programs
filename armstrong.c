#include <stdio.h>
#include <math.h>

int digits(int n) {
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int isArmstrong(int n) {
    int num = n;
   int sum = 0;
   int pow = 1;
   while (n > 0)
   {
    int rem = n % 10;
    
    for (int i = 0; i < digits(num); i++)
    {
        pow *= rem;
    }
    
    sum = sum + pow;
    n /= 10;
   }
   printf("%d", sum);
}

int main(int argc, char const *argv[])
{
    if (isArmstrong(153) == 1)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
}
