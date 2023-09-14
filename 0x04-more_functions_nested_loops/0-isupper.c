#include "main.h"

/**
 * _isupper - Function checks if a character is uppercase
 * @c: the character to be checked
 * Return: success 1 otherwise 0
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
