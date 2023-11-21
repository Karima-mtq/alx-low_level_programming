#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to address of a list
 *
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *var = *head;
	listint_t *lst = *head;

	*head = NULL;
	while (lst)
	{
		var = var->next;
		lst->next = *head;
		*head = lst;
		lst = var;
	}
	return (*head);
}
