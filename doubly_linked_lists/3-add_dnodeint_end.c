#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of the list
 * @head: Pointer to the start of the list
 * @n: number to assign to the node
 * Return: Address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (current == NULL)
	{
		new->next = *head;
		new->n = n;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current != NULL && current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
		new->n = n;
		new->next = NULL;
	}
	return (new);
}
