#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rev;
	unsigned long int number;
	unsigned long int i;
	unsigned long int prev;

	rev = i = number = 0;
	prev = *n;
	if (index > 63)
		return (-1);
	while (i < 63)
	{
		rev = rev << 1;
		if (i == index)
			rev += 0;
		else
			rev += prev & 1;
		i++;
		prev = prev >> 1;
	}
	while (i > 0)
	{
		number = number << 1;
		number += rev & 1;
		rev = rev >> 1;
		i--;
	}
	*n = number;
	return (1);
}
