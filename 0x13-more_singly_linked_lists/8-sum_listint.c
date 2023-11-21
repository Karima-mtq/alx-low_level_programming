#include "lists.h"

/**
 * sum_listint - Sums all data of linked list
 * @head: Pointer to a struct
 * Return: Sum of all data (n) of a linked list
 * 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int somme = 0;

	while (head)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
