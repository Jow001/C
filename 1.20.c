#include <stdio.h>

main()
{
	int tab = 4;
	int lineposition = 0;
	int str;

	while((str = getchar()) != EOF)
	{
		if(str != '\t')
		{
			putchar(str);
			lineposition++;
		}
		else
		{
			int space = tab - (lineposition % tab);

			for (int i = 0; i < space; i++)
			{
				putchar(' ');
				lineposition++;
			}
		}
	}

	return 0;

}
