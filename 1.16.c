#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char fron[]);

main()
{
	int len;
	int max;
	int continueline;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)
	{
		printf("%s", longest);
	}
	
	while(line[MAXLINE - 1] != '\n' && line[MAXLINE - 1] != '\0')
	{
		continueline = getline(line, MAXLINE);
		len += continueline;
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
