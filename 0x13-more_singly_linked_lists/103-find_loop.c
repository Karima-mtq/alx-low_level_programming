#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to a struct
 *
 * Return: Address of the node where loop starts
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ls1 = head;
	listint_t *ls2 = head;

	while (ls2 && ls1 && ls1->next)
	{
		ls1 = ls1->next->next;
		ls2 = ls2->next;
		if (ls2 == ls1)
		{
			ls2 = head;
			while (ls1 != ls2)
			{
				ls1 = ls1->next;
				ls2 = ls2->next;
			}
			return (ls2);
		}
	}
	return (NULL);
}
