#include "main.h"

/**
 * puts2 - prints even characters of a string
 * @str: string to be printed
 * Return:
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		for (i = 0; i % 2 == 0; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

