#include "main.h"

/**
 * rot13 - encodes string
 * @str: the string to be encoded
 * Return: string
 */

char *rot13(char *str)
{
	int l = 0;
	int i = 0;
	int j = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (alpha[l] != '\0')
	{
		l++;
	}

	while (str[i] != '\0')
	{
		for (j = 0; j < l; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}

		}
		i++;
	}
	return (str);
}
