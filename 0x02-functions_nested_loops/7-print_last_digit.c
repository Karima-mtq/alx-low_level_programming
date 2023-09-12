#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: the character to be checked
 * Return: int
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if(lastdigit < 0)
	{
		lastdigit *= -1;
	}

	_putchar(lastdigit + '0');

	return (lastdigit);
}
