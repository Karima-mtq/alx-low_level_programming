#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit, n;

	for (digit = 0; digit <= 8; digit++)
	{
		for (n = digit + 1; n <= 9; n++)
		{
			putchar(digit + '0');
			putchar(n + '0');
			if (digit != 8 || n != 9)
			{
				putchar(',');
			}
		}
	}

	putchar('\n');

	return (0);
}
