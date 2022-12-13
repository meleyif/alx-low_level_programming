#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet 10x
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; ++a)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		_putchar(a)
	}
	_putchar('\n')
}
