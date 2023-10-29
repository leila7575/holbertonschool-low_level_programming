#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: bytes container
 * Return: pointer to the bytes in s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');

}
