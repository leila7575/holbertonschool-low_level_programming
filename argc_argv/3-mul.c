#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the result of the multiplication
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
