#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0;
	int i;
	char var;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l / 2; i++)
	{
		var = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = var;
	}

}
