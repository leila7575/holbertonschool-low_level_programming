#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
