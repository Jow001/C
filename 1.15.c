#include <stdio.h>

int tabel(int fahr, int celsius);

main()
{
	float fahr, celsius;
	fahr = celsius = 0;

	tabel(fahr, celsius);
}

int tabel(float fahr, float celsius)
{

    printf("Fahrebhate to celsius Table\n");

	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
