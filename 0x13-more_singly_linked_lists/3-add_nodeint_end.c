#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Pointer to address of a list
 * @n: Integer
 *
 * Return: Address of the new element
 * NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ls1 = *head;
	listint_t *ls2 = malloc(sizeof(listint_t));

	if (!ls2)
		return (NULL);
	ls2->n = n;
	ls2->next = NULL;
	if (!*head)
	{
		*head = ls2;
		return (*head);
	}
	while (ls1->next)
		ls1 = ls1->next;
	ls1->next = ls2;
	return (ls2);
}
