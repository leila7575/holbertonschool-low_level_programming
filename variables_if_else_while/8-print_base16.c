#include <stdio.h>
/**
 * main - Print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int d;
	char c;

	for (d = '0' ; d <= '9' ; d++)
	putchar (d);

	for (c = 'a' ; c <= 'f' ; c++)
	putchar (c);

	putchar ('\n');

	return (0);
}
