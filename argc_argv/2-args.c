#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
