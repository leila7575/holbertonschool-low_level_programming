#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: array
 * @size: size of array
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i];
		diag2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", diag1, diag2);
}

