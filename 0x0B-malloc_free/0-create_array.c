#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function
 * @size: int size
 * @c: character
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ptr = (char *)malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			*(ptr + i)  = c;
		}

		return (ptr);
	}
}
