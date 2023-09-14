#include "main.h"

/**
 * print_diagonal - Function that prints numbers
 * @n: is the length of the line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
}
