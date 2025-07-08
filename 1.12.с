#include <stdio.h>

int main() 
{

	int string;
	int spaces = 0;

	while ((string = getchar()) != EOF)
	{

			if (string == ' ' || string == '\n' || string == '\t')
			{
				if (spaces == 0)
				{
					putchar('\n');
					spaces = 1;
				}
			} 
			else
			{
				putchar(string);
				spaces = 0;
			}
	}
}
