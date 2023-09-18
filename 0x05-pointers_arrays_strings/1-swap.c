#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Returns: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
