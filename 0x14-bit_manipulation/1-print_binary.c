#include <stdio.h>
#include " main.h"
#include <math.h>
/**
 * print_binary - Function.
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
