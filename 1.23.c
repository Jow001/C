#include <stdio.h>

main(void)
{
	int str, nextsymbol;
	int incomment = 0;

	while ((str = getchar()) != EOF)
	{

		if (str == '/')
		{
			nextsymbol = getchar();

			if (nextsymbol == '/' || nextsymbol == '*')
			{
				incomment = 1;

				if (nextsymbol == '/')
				{
					while ((str = getchar()) != EOF && str != '\n')
					{
					
				    }
					putchar('\n');
				}
				else if (nextsymbol == '*')
				{
					while (incomment == 1)
					{
						if (str == '/')
						{
							nextsymbol = getchar();
							if (nextsymbol == '*')
							{
								incomment = 0;
							}
						}
						else
						{
							continue;
						}
					}
				}
			}
			
		}
		else
		{
			putchar(str);
		}

	}
	return 0;
}
