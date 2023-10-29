#include <stdio.h>
#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character to be located
 *Return: first occurence of c in s or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}
	if (*(s + i) ==  c)
	{
		return (s + i);
	}
	return (NULL);
}
