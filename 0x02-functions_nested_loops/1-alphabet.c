#include "main.h"

/**
 * main - Entry point _putchar
 * description: print_alphabet
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
