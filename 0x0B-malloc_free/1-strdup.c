#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function
 * @str:  char
 * Return: char
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	ptr = (char *)malloc((l + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		*(ptr + i) = *(str + i);

	*(ptr + l) = '\0';

	return (ptr);
}
