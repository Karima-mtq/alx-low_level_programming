#include "main.h"
/**
 * _isalpha - Entry point
 * @c: the character to be checked
 * Return: int 1 or 0
 */

int _isalpha(int c)
{
	int i = 0;

	if ((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z' ))
	{
		i = 1;
	}
	return (i);
}
