#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always zero.
 */

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%d", argc);
	}
	return 0;
}
