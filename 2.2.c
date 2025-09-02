#include <stdio.h>

int main() 
{    
    int i = 0;
    int c;
    int lim = 5;
    int s[5];

    while (1<2)
    {
        if (i >= lim - 1)
        {
            break;
        }

        c = getchar();

        if (c == '\n')
        {
            break;
        }

        if (c == EOF)
        {
            break;
        }

        s[i] = c;
        i++;
    }

    return 0;
}
