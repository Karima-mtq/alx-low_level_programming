#include "main.h"

/**
 * string_toupper - switch to uppercase
 * @str: string to switch
 * Return: string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);

}
