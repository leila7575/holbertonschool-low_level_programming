#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @array: array to be searched from
 * @size: size of array
 * @value: value to be searched for
 * Return: index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1, left = 0, mid, i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;

		}

		return (-1);
}

