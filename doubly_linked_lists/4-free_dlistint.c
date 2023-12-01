#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Pointer to the start
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *killnode;

	while (head != NULL)
	{
		killnode = head;
		head = head->next;
		free(killnode);
	}
}
