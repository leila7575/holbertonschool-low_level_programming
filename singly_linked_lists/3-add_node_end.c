#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head
 * @str: string to be stored
 * Return: adress of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str);
{
	if (str == NULL)
	{
		return(NULL);
	}

	list_t *new_node = (list_t*) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL;
	}

	new_node-> str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if(*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
			current->next = new_node;
		}
		return (new_node);
}
