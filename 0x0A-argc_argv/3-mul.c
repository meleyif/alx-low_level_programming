#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		mul = mul * atoi(argv[i]);
	}

	return (0);
}
