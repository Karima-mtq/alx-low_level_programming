#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)
{
	short tst;
	int i, sign, result;

	i = sign = result = tst = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			tst = 1;
		}
		else if (tst == 1)
			break;
		i++;
	}
	result *= sign;
	return (result);
}
