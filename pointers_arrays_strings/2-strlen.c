#include "main.h"

/**
 * _strlen - returns the length of a tring
 *@s: first character of the string
 * Return: len
 */
int _strlen(char *s)
{
	char *ptr = s;
	int  len;

	len = 0;
	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	return (len);
}
