#include "main.h"
/**
 *_memset - fills the first n bytes of memory area pointed to by s
 *@s: memory area
 *@n: number of byte
 *@b: constant byte
 *Return: memory area s filled with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
