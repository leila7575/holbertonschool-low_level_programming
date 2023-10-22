#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return:
 */
void times_table(void)
{
	int a, b;

	for (a = 0; b < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar('0');
			}
			else if (a * b < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(a * b + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
		}
	}
	_putchar('\n');
}
