#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function
 * @nmemb: char
 * @size: char
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size);
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; ptr[i] != '\0'; i++)
		ptr[i] = 0;

	return (ptr);

}
