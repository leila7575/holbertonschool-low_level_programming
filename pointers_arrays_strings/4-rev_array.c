#include "main.h"

/**
 *reverse_array - reverses an array
 * @a: array of integers
 * @n: number of elements to swap
 * Return:
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
