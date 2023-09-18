#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string
 * Return: integer length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
