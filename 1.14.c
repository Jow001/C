#include <stdio.h>

main()
{
	int str;
	int symbols[256] = { 0 };

	while ((str = getchar()) != EOF)
	{
		symbols[str]++;
	}

	int i = 0;

	for (i = 0; i <= 256; i++)
	{
		if (symbols[i] > 0)
		{
			printf("%c: %d \n ", i, symbols[i]);
		}
	}
	return 0;
}
