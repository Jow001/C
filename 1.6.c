#include <stdio.h>
main()
{
	printf("Enter the random number:");

	int c = getchar();

	printf("%i", c != EOF);
}
