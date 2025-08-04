#include <stdio.h>

main(void)
{
	int c = 0;
	int inround = 0;
	int insquare = 0;
	int incurve = 0;

	while ((c = getchar()) != EOF)
	{
		putchar(c);

		if (c == '(' && inround == 0)
		{
			inround = 1;

				while (inround == 1 && (c = getchar()) != EOF)
				{
					putchar(c);

					if (c == ')')
					{
						inround = 0;
						break;
					}
					else if (c == '\n' && inround == 1)
					{
						printf("error");
						break;
					}
				}
		}
		else if (c == '['  && insquare == 0)
		{
			insquare = 1;

			while (insquare == 1 && (c = getchar()) != EOF)
			{
				putchar(c);

				if (c == ']')
				{
					insquare = 0;
					break;
				}
				else if (c == '\n' && insquare == 1)
				{
					printf("error");
					break;
				}
			}
		}
		else if (c == '{' && incurve == 0)
		{
			incurve = 1;

			while (incurve == 1 && (c = getchar()) != EOF)
			{
				putchar(c);

				if (c == '}')
				{
					incurve = 0;
					break;
				}
				else if (c == '\n' && incurve == 1)
				{
					printf("error");
					break;
				}
			}
		}
	}

	return 0;

}
