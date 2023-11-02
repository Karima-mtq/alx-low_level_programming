#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function
 * @nmemb: char
 * @size: char
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, taille;

	if (nmemb == 0 || size == 0)
		return (NULL);

	taille = nmemb * size;
	ptr = malloc(taille);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < taille; i++)
		ptr[i] = 0;
	return (ptr);

}
