#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need to flip to get from one number to another
 * @n: first number to check bits
 * @m: second number to check bits
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int i = 0;

	while (flipped)
	{
		if (flipped & 1)
		{
			i++;
		}
		flipped >>= 1;
	}
	return (i);
}

