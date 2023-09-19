#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int l = 0;
	int i, s;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		s = l / 2;
	}
	else
	{
		s = (l + 1) / 2;
	}

	for (i = s; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
