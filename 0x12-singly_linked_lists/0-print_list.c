#include "lists.h"
/**
 * _strlen - calculate length
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
	int l = 0;

	if (str == NULL)
		return (0);

	while (str[l] != '\0')
		l++;
	return (l);
}
/**
 * print_list - function
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
