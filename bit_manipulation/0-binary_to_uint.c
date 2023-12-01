#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, length;
	unsigned int decimalvalue;

	i = length = decimalvalue = 0;
	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		if (b[length] == '0' || b[length] == '1')
			length++;
		else
			return (0);
	}
	while (i < length)
	{
		decimalvalue = decimalvalue << 1;
		if (b[i] == '1')
			decimalvalue += 1;
		i++;
	}
	return (decimalvalue);
}
