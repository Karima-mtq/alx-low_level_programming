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
	unsigned int l, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;

	ptr = malloc(l + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		if (s2[j])
			ptr[j + i] = s2[j];
		else
			ptr[j + i] = '\0';
	}
	ptr[j + i + 1] = '\0';

	return (ptr);
}
