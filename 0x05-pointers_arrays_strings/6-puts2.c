#include "main.h"

/**
 * _puts - function that returns the length of a string
 * @str: the string
 * Return: integer length
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		if( *str != "\0")
			_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
