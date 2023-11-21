#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: Pointer to address of a list
 * @index: Index of the list where node should be deleted
 *
 * Return: 1 on success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *var = *head;
	listint_t *lst;

	if (!var)
		return (-1);
	while (*head && index)
	{
		if (!var)
			return (-1);
		if (i == index - 1)
			break;
		var = var->next;
		++i;
	}
	if (index)
	{
		lst = var->next->next;
		free(var->next);
		var->next = lst;
	}
	else
	{
		*head = (*head)->next;
		free(var);
	}
	return (1);
}
