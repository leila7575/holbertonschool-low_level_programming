#include "main.h"

/**
 * _puts - Prints a string to the standard outpout
 *@str: The string to be printed
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		str++;
	}
	_putchar('\n');
}
