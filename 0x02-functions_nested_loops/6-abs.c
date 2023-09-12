#include "main.h"
/**
 * _abs - Entry point
 * @n: the character to be checked
 * Return: int n or -n
 */

int abs(int n)
{
	int i;

	if (n >= 0)
	{
		i = n;
	}
	else
	{
		i = -n;
	}
	return (i);
}
