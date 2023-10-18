#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

