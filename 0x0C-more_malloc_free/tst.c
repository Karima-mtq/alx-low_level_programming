#include <stdlib.h>
#include "main.h"

/**
 * *realloc - function
 * @ptr: void
 * @old_size: int
 * @new_size: unt
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *char_new_ptr;
	char *char_ptr;
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_size = old_size;
	}

	char_new_ptr = (char *)new_ptr;
	char_ptr = (char *)ptr;
	for (i = 0; i < new_size; i++)
	{
		char_new_ptr[i] = char_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
