#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to be printed
 * Return: 1 in success & 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
