#include "main.h"

/**
 * main - Entry point _putchar
 * description: print_alphabet
 * Return: 0 (Success)
 */
int print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
