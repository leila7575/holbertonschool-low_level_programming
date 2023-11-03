#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
