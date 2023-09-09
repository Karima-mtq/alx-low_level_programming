#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit, n;

	for (digit = 0; digit <= 9; digit++)
	{
		for (n = 0; n <= 9; n++)
		{
			putchar(digit + '0');
			putchar(n + '0');
			if (digit != 9 || n != 9)
			{
				putchar(',');
			}
		}
	}

	putchar('\n');

	return (0);
}
