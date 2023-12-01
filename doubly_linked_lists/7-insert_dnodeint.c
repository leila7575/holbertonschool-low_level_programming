#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *   * @head: ointer to the start of the list
 *    * @index: The index position to add the node at
 *     * @n: The value to assign to the data of the node
 *      *
 *       * Return: Address of the new node, or NULL if it fails or a node cannot be
 *        * added at the given index
 *         */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	current = *head;
	count = 0;
	if (current == NULL && index != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (count != index - 1)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		count++;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
