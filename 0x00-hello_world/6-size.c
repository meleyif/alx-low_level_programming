#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;

	printf("The size of char: %zu bytes\n", sizeof(charType));
	printf("The size of int: %zu bytes\n", sizeof(intType));
	printf("The size of long int: %zu bytes\n", sizeof(longintType));
	printf("The size oflong long int: %zu bytes\n", sizeof(longlongintType));

	return (0);
}
