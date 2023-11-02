#include "main.h"

/**
 * factorial - returns factorial of n
 * @n : number
 * Return: -1 if n < 0 otherwise factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
