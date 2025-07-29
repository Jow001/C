#include <stdio.h>

main(void)
{
	int spacecount = 0;
	int tabulations = 0;
	int spaces;
	int str;
	while ((str = getchar()) != EOF) 
	{
		if (str == ' ')
		{
			spacecount++;
	    }
		else
		{
			tabulations = spacecount / 4;
			if (tabulations > 0)
			{
				while (tabulations > 0)
				{
					putchar('\t');
					tabulations--;
				}
			}
			else
			{
				spaces = spacecount % 4;
				if (spaces > 0)
				{
					while (spaces > 0)
					{
						putchar(' ');
						spaces--;
					}
				}
			}
		}

		spacecount = 0;
		putchar(str);

	}

	return 0;

}
