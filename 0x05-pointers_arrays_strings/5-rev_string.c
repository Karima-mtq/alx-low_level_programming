#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	char *var = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (s >= var)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
