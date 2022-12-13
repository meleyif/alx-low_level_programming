#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = -1 * lastdigit;
	}

	_putchar(lastdigit + '0');
	return (lastdigit);
}
