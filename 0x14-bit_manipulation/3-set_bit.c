#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit - Function.
 * @index: is the index
 * @n: number.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int c;

	if (index > 63)
		return (-1);
	c = 1 << index;
	*n = *n | c;
	return (1);
}
