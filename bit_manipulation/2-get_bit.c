#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index
 * @n: number
 * @index: The index of the bit value
 * Return: value of the bit at the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = 0;
	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	if (i < index)
		return (0);
	return (-1);
}
