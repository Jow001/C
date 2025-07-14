#include <stdio.h>

main()
{
	int i, str, onewordlen, wordscount;
	int wordslen[100];
	onewordlen = wordscount = 0;
	
	for (i = 0; i < 100; i++)
	{
		wordslen[i] = 0;
	}

	while ((str = getchar()) != EOF)
	{
		if (str != ' ' && str != '\n' && str != '\t')
		{
			onewordlen++;
		}
		else
		{
			wordslen[wordscount] = onewordlen;
			wordscount++;
			onewordlen = 0;
		}
	}

	int x, maxlen, nowword;
	x = maxlen = nowword = 0;

	for (x = 0; x <= wordscount - 1; x++ )
	{
		if (maxlen <= wordslen[x])
		{
			maxlen = wordslen[x];
	    }
	}

	int line = 0;

	for (line = maxlen; line > 0; line-- )
	{
		for (x = 0; x <= wordscount - 1; x++)
		{
			if (wordslen[x] >= line)
			{
				printf("#");
				printf(" ");
			}
			else
			{
				printf(" ");
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
