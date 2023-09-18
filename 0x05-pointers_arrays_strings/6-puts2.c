#include "main.h"

/**
 * puts2 - function that returns the length of a string
 * @str: the string
 * Return: integer length
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ( str[i] != '\0')
		{
			_putchar(str[i]);
		}
		i += 2;
	}

	_putchar('\n');
}
