#include "main.h"
/**
 * print_sign - Entry point
 * @n: the character to be checked
 * Return: int 1 or 0 or -1
 */

int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
