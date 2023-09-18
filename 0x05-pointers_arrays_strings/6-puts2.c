#include "main.h"

/**
 * puts2 - function that returns the length of a string
 * @str: the string
 * Return: integer length
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
