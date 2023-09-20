#include "main.h"

/**
 * leet - function switch letters
 * @str: string to be switched
 * Return: string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char table[10][2] = {
		{'a', '4'},
		{'A', '4'},
		{'e', '3'},
		{'E', '3'},
		{'o', '0'},
		{'O', '0'},
		{'t', '7'},
		{'T', '7'},
		{'l', '1'},
		{'L', '1'}
	};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == table[j][1])
			{
				str[i] = table[j][2];
			}
		}
		i++;
	}
	return (str);
}
