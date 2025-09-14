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
    int somethingwas = 0;
    int error = -1;

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

    while (s2[i] != '\0')
    {
        while (s1[j] != '\0')
        {

            if (s2[i] == s1[j])
            {
                printf("%c : %i \n", s2[i], j);
                j++;
                somethingwas = 1;
                break;
            }
            else
            {
                j++;
            }

        }

        i++;
    }

    if (somethingwas == 0)
    {
        printf("%i", error);
    }

    return 0;

}
