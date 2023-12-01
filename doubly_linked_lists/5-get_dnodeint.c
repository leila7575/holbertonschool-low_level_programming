#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: Pointer to the start of the list
 * @index: index of the node
 * Return: the nth node or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (count != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}
