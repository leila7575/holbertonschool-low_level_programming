#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to dest
 *@n: number of byte
 *@dest: destination memory area
 *@src: source memory area
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
