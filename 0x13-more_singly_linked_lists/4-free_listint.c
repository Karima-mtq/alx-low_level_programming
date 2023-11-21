#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to a struct
 */
void free_listint(listint_t *head)
{
	listint_t *var;

	while (head)
	{
		var = head->next;
		free(head);
		head = var;
	}
}
