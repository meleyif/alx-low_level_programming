#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
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
