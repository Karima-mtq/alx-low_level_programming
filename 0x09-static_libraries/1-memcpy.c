#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: the destination string
 * @src: source string
 * @n: integer
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
