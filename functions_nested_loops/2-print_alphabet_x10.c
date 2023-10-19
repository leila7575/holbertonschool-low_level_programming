#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int repeat;
	char alphabet;

	while (repeat++ < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
