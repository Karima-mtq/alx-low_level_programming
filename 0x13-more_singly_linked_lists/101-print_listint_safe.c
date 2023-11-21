#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to a struct
 *
 * Return: Number of nodes in list
 */
const listint_t **_r(const listint **list, size_t size, const listint_t *new)
{
	const listint_t **lst;
	size_t i;

	lst = malloc(size * sizeof(listint_t *));

	if (lst == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < siwe - 1; i++)
		lst[i] = list[i];
	lst[i] = new;
	free(list);
	return(lst);
}
