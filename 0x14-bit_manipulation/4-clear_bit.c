#include <stdio.h>
#include «main.h»
#include <math.h>
/**
 * clear_bit - Function
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number input.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int c;

	if (index > 63)
		return (-1);
	c = 1 << index;
	*n = *n & (~c);
	return (1);
}
