#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: int 1 or 0
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

	return (j);
}
