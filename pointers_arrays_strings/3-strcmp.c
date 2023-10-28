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
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}

		if (s1[i] == s2[j])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[j]);
		}
}
