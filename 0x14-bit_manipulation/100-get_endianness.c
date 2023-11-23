#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
