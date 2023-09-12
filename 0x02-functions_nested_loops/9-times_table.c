#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j = 0, n = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((j * n) + '0');
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
