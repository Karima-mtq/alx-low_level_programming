#include "lists.h"
/**
 * *add_node_end - function
 * @head: head
 * @str: str
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node2 = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !node2)
		return (NULL);

	if (str)
	{
		node2->str = strdup(str);
		if (!node2->str)
		{
			free(node2);
			return (NULL);
		}
		node2->len = _strlen(node2->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = node2;
	}
	else
		*head = node2;
	return (node2);
}
