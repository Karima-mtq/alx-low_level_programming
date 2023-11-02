#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function
 * @min: char
 * @max: char
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, taille;

	if (min > max)
		return (NULL);

	taille = (max - min + 1);
	ptr = malloc(taille * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < taille; i++)
		ptr[i] = i + min;
	return (ptr);

}
