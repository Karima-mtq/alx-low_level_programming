#include "lists.h"

/**
 * print_listint - function
 * @h: pointer to first node
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
