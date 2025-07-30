#include <stdio.h>

main(void)
{
	int str;
	int position = 0;
	while ((str = getchar()) != EOF)
	{
		putchar(str);
		position++;

		if (position >= 40 && str != ' ')
		{
			putchar('\n');
			position = 0;
		}
	}

	return 0;

}
