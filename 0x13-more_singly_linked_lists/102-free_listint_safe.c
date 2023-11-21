#include "lists.h"

/**
 * free_listint_safe - Prints a linked list
 * @h: Pointer to address of a list
 *
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *var;

	while (*h && *h > (*h)->next)
	{
		var = (*h)->next;
		free(*h);
		*h = var;
		++i;
	}
	if (*h)
	{
		free(*h);
		++i;
	}
	*h = NULL;
	return (i);
}
