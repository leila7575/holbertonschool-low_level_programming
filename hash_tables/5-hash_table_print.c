#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return:
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (j > 0)
				printf(", ");
			printf("'%s' : '%s'", temp->key, temp->value);
			temp = temp->next;
			j++;
		}
	}
	printf("}\n");
}
