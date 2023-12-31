#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of the list
 * @head: Pointer to the pointer at the start
 * @n: value of the nodes
 * Return: The address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (start != NULL)
	{
		while (start->prev != NULL)
		start = start->prev;
		start->prev = new;
	}
	new->next = *head;
	new->n = n;
	new->prev = NULL;
	*head = new;
	return (new);
}
