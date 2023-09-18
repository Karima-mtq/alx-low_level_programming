#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	char var = *s;

	while (*s != '\0')
	{
		s++;
	}
	while (*s != var)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
