#include "lists.h"

/**
 * list_len - length function
 * @h: list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
