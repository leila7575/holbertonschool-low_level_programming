#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head
 * @str: 
 * Return: adress of new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *new_node;
	unsigned int i;
	
	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return(NULL;
	}

	new_node-> str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	
	return (*head);
}


