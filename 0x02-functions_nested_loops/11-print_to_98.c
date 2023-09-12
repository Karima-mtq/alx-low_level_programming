#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - Addition of two integers.
 * @n: the first integer
 * Return: from n to 98 or from 98 to n
 */

void print_to_98(int n);
{
	if ( n < 98)
	{
		for (i  = n; i < 98; i++)
		{
		printf("%d, ", i);
		}
		printf("98\n"); 
	}
	if (n > 98)
	{
		for(i = n; i > 98; i--)
		{
		printf("%d, ", i);
		}
		printf("98\n");
	}

}
