#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 * Return: always 0
 */
void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
