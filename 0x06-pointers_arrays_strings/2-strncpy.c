#include "main.h"

/**
 * _strncpy - Copy string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: the number of bytes from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		int j;

		for (j = i; j < n; j++)
		{
		dest[i] = '\0';
		}
	}
	return (dest);
}
