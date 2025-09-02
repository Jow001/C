#include <stdio.h>

int htoi(char s[])
{
    int i = 0;
    int digit = 0;
    int result = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    {
        i = 2;
    }

    for (; s[i] != '\0'; i++)
    {
        if (s[i] >= 0 && s[i] <= 9)
        {
            digit = s[i] - '0';
        }
        else if (s[i] >= 'a' && s[i] <= 'f')
        {
            digit = 10 + (s[i] - 'a');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            digit = 10 + (s[i] - 'A');
        }
        else
        {
            break;
        }
        result = result * 16 + digit;
    }

    return result;
}

int main() 
{    
    char s[99];
    int i = 0;
    int str;

    while ((str = getchar()) != EOF)
    {
        s[i] = str;
        i++;
    }

    printf("%d\n", htoi(s));
     
}
