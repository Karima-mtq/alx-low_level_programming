#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function
 * @n: Number Input 1.
 * @m: Number Input 2.
 * Return: Number of flip in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int fp = 0, cp, cp1;

	while (!(n == 0 && m == 0))
	{
		cp = n & 1;
		cp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (cp != cp1)
			fp += 1;
	}
	return (fp);
}
