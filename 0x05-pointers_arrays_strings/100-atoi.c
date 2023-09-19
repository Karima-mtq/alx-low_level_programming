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

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
