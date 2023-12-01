#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print out the integer contained in a listint_t node
 * @h: Pointer to the start of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
