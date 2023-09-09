#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit, n, i, j;

	for (digit = 0; digit <= 9; digit++)
	{
		for (n = 0; n <= 8; n++)
		{
			for (i = digit; i <= 9; i++)
			{
				for (j = n + 1; j <= 9; j++)
				{
					putchar(digit + '0');
					putchar(n + '0');
					putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					if (digit != 9 || n != 8 || i != 9 || j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
