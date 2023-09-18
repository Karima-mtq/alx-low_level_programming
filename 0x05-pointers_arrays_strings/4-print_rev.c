#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (s >= s)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
