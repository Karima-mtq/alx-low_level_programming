#include "lists.h"
/**
 * free_list - free
 * @head: head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *node2;

	if (!head)
		return;

	node = head;
	while (node)
	{
		node2 = node->next;
		free(node->str);
		free(node);
		node = node2;
	}
}
