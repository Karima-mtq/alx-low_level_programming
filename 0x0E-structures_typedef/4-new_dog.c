#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * copy_string - function
 * @src: char
 * Return: char
 */

char *copy_string(const char *src)
{
	int length = 0, i;
	char *dest;

	if (src == NULL)
	{
		return (NULL);
	}
	while (src[length] != '\0')
	{
		length++;
	}
	dest = malloc(length + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * new_dog - function
 * @name: char
 * @age: float
 * @owner: char
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = copy_string(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = copy_string(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
