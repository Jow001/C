#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char fron[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)
	{
		int i;
		for (i = 0; i < max; i++)
		{
			if(longest[i] != ' ' && longest[i] != '\t')
			{
				printf("%c", longest[i]);
			}
		}
	}

	return 0;
}

int getline(char line[], int lim)
{
	int str, i;

	for (i = 0; i < lim - 1 && (str = getchar()) != EOF && str != '\n'; i++)
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

void copy(char to[], char from[])
{
	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
	{
		i++;
	}
}
