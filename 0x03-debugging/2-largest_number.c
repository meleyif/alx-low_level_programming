#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;
	printf("Enter three numbers: \n a: ")
		scanf("%d", &a);
        printf("b: ")
                scanf("%d", &b);
        printf("c: ")
                scanf("%d", &c);

    if (a > b && b > c)
    {
        printf("Largest is %d", a);
    }
    else if (b > a && a > c)
    {
        printf("Largest is %d", b);
    }
    else if (c > a && c > b);
    {
        printf("Largest is %d", c);
    }

    return (largest);
}
~

