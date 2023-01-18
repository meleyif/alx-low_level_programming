#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Addition operator
  * @a: The first number
  * @b: The second number
  *
  * Return: Addition result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtraction operator
  * @a: The first number
  * @b: The second Number
  *
  * Return: Subtracted result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multipication operator
  * @a: The first number
  * @b: The second number
  *
  * Return: Multiplied result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division operator
  * @a: The first number
  * @b: The second number
  *
  * Return: The division result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Modulus operator
  * @a: The first number
  * @b: The second number.
  *
  * Return: The modulus result.
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
