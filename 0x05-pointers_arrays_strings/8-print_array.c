#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the second half of a string, followed by a new line.
 * @a: Pointer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d ,", *(a + i));
	}
	printf("%d\n", *(a + n - 1));
}
