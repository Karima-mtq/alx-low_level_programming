#include "main.h"

/**
 * _atoi - function converts string to int
 * @s: the string
 * Return: Integer
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int j = 0;

	while (s[j] != '\0' && (s[j] < '0' || s[j] > '9'))
	{
		if (s[j] == '-')
		{
			sign = -1;
			break;
		}
		else
		{
			j++;
		}
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
