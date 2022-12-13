#include "main.h"
/**
 * main - Entry point _putchar
 * description: print out
 * Return: 1 (success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
