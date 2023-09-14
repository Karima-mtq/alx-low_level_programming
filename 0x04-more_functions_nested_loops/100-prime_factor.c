#include <stdio.h>

/**
 * main - Function that finds the prime factor
 * Return: void
 */

int main(void)
{
	long int n = 612852475143;

	int factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n = n / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%d\n", factor);
	return (0);
}
