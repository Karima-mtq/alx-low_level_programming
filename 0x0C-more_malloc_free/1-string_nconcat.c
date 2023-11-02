#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - function
 * @s1: char
 * @s2: char
 * @n: int
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l, i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;
	size = (l + n) * sizeof(*ptr);
	ptr = malloc(size + 1);

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
