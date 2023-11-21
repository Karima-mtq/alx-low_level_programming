#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to address of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *lst;

	if (!head)
		return;
	while (*head)
	{
		lst = (*head)->next;
		free(*head);
		*head = lst;
	}
	*head = NULL;
}
