#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit, n, i;

	for (digit = 0; digit <= 7; digit++)
	{
		for (n = digit + 1; n <= 8; n++)
		{
			for (i = n + 1; i <=9; i++)
			{
				putchar(digit + '0');
				putchar(n + '0');
				putchar(i + '0');
				if (digit != 7 || n != 8 || i != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
