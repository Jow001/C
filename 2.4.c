#include <stdio.h>

int main() 
{    
    char s1[99];
    char s2[99];
    int str;
    int i = 0;
    int j = 0;
    int i1 = 0;
    int j1 = 0;

    while ((str = getchar()) != EOF)
    {
        s1[i] = str;
        i++;
    }
    
    i = 0;

    while ((str = getchar()) != EOF)
    {
        s2[i] = str;
        i++;
    }

    i = 0;

    while (s1[i] != '\0')
    {
        while (s2[j] != '\0')
        {

            if (s1[i] == s2[j])
            {
                while (s1[i] != '\0')
                {
                    if (s1[i] == s2[j])
                    {
                        s1[i] = ' ';
                        i++;
                    }
                    else
                    {
                        i++;
                    }
                }
            }
            else
            {
                j++;
            }

        }

        i++;
    }

    i = 0;

    while (s1[i] != '\0')
    {
        printf("% c", s1[i]);
        i++;
    }

    return 0;
}
