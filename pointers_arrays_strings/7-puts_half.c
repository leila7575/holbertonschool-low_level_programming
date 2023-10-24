#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	for (start = (length + 1) / 2; str[start] != '\0'; start++)
	{
		_putchar(str[start]);
	}
	_putchar('\0');
}
