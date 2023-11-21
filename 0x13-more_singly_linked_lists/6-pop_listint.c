#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a struct
 *
 * Return: Head node's data (n)
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *lst;
	int nb = 0;

	if (*head)
	{
		nb = (*head)->n;
		lst = (*head)->next;
		free(*head);
		*head = lst;
	}
		return (nb);
}
