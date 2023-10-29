#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	char leet[5] = {'A', 'E', 'O', 'T', 'L' };
	int res[5] = {4, 3, 0, 7, 1};
	unsigned int i;
	int j = 0;

	while (str[j])
	{
		for (i = 0; i <= 4 ; i++)
		{
			if (str[j] == leet[i] || str[j] - 32 == leet[i])
			{
				str[j] = '0' + res[i];
			}
		}

		j++;
	}

	return (str);
}
