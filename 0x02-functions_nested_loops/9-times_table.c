#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, n = 0, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = j * n;
			if (p >= 10)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else
			{
				_putchar(p + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		n++;
	}
}
