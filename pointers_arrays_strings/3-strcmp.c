#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0, a negative value or a positive value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		else if (s1[i] == '\0')
		{
			return (-s2[i]);
		}
		else
		{
			return (s1[i]);
		}
}
