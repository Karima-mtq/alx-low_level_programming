#include "main.h"

/**
 * puts_half - function that prints a string in reverse
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int l = 0, n, i;

	while ( *str != '\0')
	{
		l++;
		str++;
	}

	if ( l % 2 ) 
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}

	for (i = n; str[i]!='\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
