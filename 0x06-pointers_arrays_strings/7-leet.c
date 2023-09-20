#include "main.h"
/**
 *leet - change letters by numbers
 *@str: pointer parameter
 *Description: change letters by numbers
 *Return: return pointer
 */
char *leet(char *str)
{
	int j;
	int i = 0;

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
			if (s[i] == table[j][0])
			{
				s[i] = table[j][1];
			}
		}
		i++;
	}
	return (str);
}
