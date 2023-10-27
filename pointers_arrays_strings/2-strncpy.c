#include "main.h"

/**
 * _strncpy - copies a string using at most n bytes
 * @dest: destination
 * @src: source
 *@n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i++] = '\0';

	return (dest);
}