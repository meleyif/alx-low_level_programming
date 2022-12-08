#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %iu byte(s)\n", sizeof(char));
	printf("Size of int: %iu byte(s)\n", sizeof(int));
	printf("Size of long int: %iu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %iu byte(s)\n", sizeof(long long int));
	Printf("Size of float: %iu byte(s)\n", sizeof(float));
	return (0);
}
