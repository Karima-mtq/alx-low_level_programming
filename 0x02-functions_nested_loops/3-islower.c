#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */

int _islower(int c)
{
	char i = 'a';
	int j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			j = 1;
		}
		
	}

	return j;
}
