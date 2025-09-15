#include <stdio.h>

int setbits(int x, int y, int p, int n)
{
    if (n <= 0)
    {
        return x;
    }
    if (p < 0)
    {
        return x;
    }

    int clone = (1 << n) - 1;
    
    x = x & ~(clone << (p - n + 1));

    x = x | ((y & clone) << (p - n + 1));

    return x;
}

int main() 
{    
    int x = 0;
    int y = 0;
    int p = 0;
    int n = 0;
    int c = 0;

    printf("Argument x:");

    while ((c = getchar()) != EOF)
    {
        x = c;
    }
    
    c = 0;
    printf("Argument y:");

    while ((c = getchar()) != EOF)
    {
       y = c;
    }

    c = 0;
    printf("Byte number at argument x:");

    while ((c = getchar()) != EOF)
    {
        p = c;
    }

    c = 0;
    printf("Argument y bytes count:");

    while ((n = getchar()) != EOF)
    {
        n = c;
    }

    int result = setbits(x,y,p,n);

    printf("%i", result);
}
