#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > 80)
        {
            printf("%s", line);
        }
    }

    return 0;
}

int getline(char line[], int lim)
{
    int str, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && str != '\n'; i++)
    {
        line[i] = str;
    }

    if (str == '\n')
    {
        line[i] = str;
        i++;
    }

    line[i] = '\0';
    return i;
}
