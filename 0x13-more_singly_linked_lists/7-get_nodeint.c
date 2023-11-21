#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a linked list
 * @head: Pointer to a struct
 * @index: Index of node
 * Return: nth nodeor NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;

	while (head)
	{
		if (l == index)
			return (head);
		head = head->next;
		++l;
	}
	return (NULL);
}
