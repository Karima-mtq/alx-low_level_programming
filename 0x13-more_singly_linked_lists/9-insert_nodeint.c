#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node
 * @head: Pointer to address of a list
 * @idx: Index
 * @n: Integer
 *
 * Return: Address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *var = *head;
	listint_t *lst = malloc(sizeof(listint_t));

	if (!lst)
		return (NULL);
	while (*head && idx)
	{
		if (!var)
			return (NULL);
		if (i == idx - 1)
			break;
		var = var->next;
		++i;
	}
	lst->n = n;
	if (idx)
	{
		lst->next = var->next;
		var->next = lst;
	}
	else
	{
		lst->next = var;
		*head = lst;
	}
	return (lst);
}
