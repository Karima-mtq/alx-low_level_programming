#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function
 * @s1: string
 * @s2: string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int l = 0, k = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l] != '\0')
		l++;
	while (s2[k] != '\0')
		k++;


	ptr = (char *)malloc((l + k + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < k; j++)
		*(ptr + (i + j)) = *(s2 + j);

	*(ptr + l + k) = '\0';

	return (ptr);


}
