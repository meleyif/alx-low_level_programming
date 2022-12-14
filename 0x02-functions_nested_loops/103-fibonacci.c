#include <stdio.h>
/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 *
 * Return: Nothing!
 */
int main(void)
{
	long i = 1, j = 2, sum = 0, res = 2;
	
	while (sum < 4000000)
	{
		sum = i + j;
		i = j;
		j = sum;
		if (sum % 2 == 0)
		{
			res = res + sum;
		}
	}
	printf("%li\n", res);
	return (0);

}
