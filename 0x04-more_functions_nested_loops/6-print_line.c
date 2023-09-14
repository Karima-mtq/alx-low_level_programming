#include "main.h"

/**
 * print_line - Function that prints numbers
 * @n: is the length of the line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
