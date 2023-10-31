#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function
 * @size: int size
 * @c: character
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char*)malloc(size * sizeof(char));	
	
	*ptr = c;
	
	return (ptr);
}
