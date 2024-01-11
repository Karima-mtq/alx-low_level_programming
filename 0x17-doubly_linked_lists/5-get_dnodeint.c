#include "lists.h"

/**
 * get_dnodeint_at_index - Locates node.
 * @head: The head
 * @index: node to locate.
 *
 * Return: If the nodenot exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
