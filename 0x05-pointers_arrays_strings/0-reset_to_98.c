#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void reset_to_98(int*n)
{
	int n;
	int *p;

	n = 402;
	p = &n;

	printf("n=%d\n", n);
	*p = 98;
	reset_to_98(&n);
	printf("n=%d\n", n);
	return 0;
}
