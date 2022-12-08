#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints a string to tha standard error
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "add that piece of art is useful\" -Dora Korpar, 2015-10-199\n", 58);
	return (1);
