#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet 10x
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int c, cn;

	cn = 0;

	while (cn < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		cn++;
		_putchar('\n');
	}
}
