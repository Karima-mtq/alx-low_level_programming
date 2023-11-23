#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - function.
 * @index: is the index
 * @n: bit value in the index.
 * Return: the value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
