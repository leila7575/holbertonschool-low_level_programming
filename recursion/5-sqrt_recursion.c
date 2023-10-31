#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns thethe square root of a number
 * @n: integer
 * @i: number
 * Return: the square root of a number
 */

int _sqrt(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt(n, i + 1));
}
