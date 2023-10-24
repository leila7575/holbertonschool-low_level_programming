#include "main.h"

/**
 * puts2 - prints even characters of a string
 * @str: string to be printed
 * Return:
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

