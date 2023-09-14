#include "main.h"

/**
 * _isdigit - Function checks if a character is a digit
 * @c: the integr to be checked
 * Return: success 1 otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
