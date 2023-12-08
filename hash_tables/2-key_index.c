#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key
 * @size: hash table size
 * Return: index at which the key should be stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
