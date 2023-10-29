#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string changed to an integer
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
		}	
		i++;
	}

	return (sign * res);
}
