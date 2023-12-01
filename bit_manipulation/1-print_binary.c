#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: unsigned long int to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int rev;
	unsigned long int i;

	rev = i = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		rev = rev << 1;
		rev += n & 1;
		i++;
		n = n >> 1;
	}
	while (rev > 0)
	{
		_putchar((rev & 1) + '0');
		rev = rev >> 1;
		i--;
	}
	if (i > 0)
	{
		while (i != 0)
		{
			_putchar('0');
			i--;
		}
	}
}
