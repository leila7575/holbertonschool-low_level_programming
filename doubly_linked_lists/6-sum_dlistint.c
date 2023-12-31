#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data
 * @head: pointer to the start of the list
 * Return: sum of all data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
