#include "main.h"
#include <stdio.h>
/**
 * _atoi - function converts string to int
 * @s: the string
 * Return: Integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int j = 0, l = 0;

	while (s[j] != '\0')
	{
		if (s[j] == '-')
		{
			l++;
		}
		else if (s[j] >= '0' && s[j] <= '9')
		{
			break;
		}
		j++;
	}

	if (l % 2 != 0)
	{
		sign = -1;
	}


	while (s[j] >= '0' && s[j] <= '9')
	{
		result = result * 10 + (s[j] - '0');
		j++;
	}
	return (sign * result);
}
