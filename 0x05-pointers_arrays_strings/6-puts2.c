#include "main.h"

/**
 * puts2 - function that returns the length of a string
 * @str: the string
 * Return: integer length
 */

void puts2(char *str)
{
	int i, l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for ( i = 0; i < l; i += 2)
	{
		if ( str[i] == "\O")
		{
			break;
		}
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
