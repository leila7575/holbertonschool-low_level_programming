#include <stdio.h>
/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	for (c = 'z' ; c <= 'a' ; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
