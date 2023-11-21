#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to first node
 * @n: Integer
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst = malloc(sizeof(listint_t));

	if (!lst)
		return (NULL);
	lst->n = n;
	lst->next = *head;
	*head = lst;
		return (*head);
}
