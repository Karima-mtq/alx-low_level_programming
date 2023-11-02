#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - function
 * @ac: int
 * @av: char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int length = 0;
	int indice = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			length = length + strlen(av[i]) + 1;
	}

	str = (char *)malloc(ac * sizeof(char));
	
	if (str == NULL)
		return (NULL);

	for (i=0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(str + indice, av[i]);
			indice += strlen(av[i]);
			str[indice] = '\n';
			indice++;
		}
	}
	return(str); 
	
}
