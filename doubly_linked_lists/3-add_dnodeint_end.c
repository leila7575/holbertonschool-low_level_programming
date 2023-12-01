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
	new->n = n;
	new->next = NULL;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	if (current != NULL)
	{
		current->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
