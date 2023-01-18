#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Addition operator
  * @num1: First integer
  * @num2: Second integer
  *
  * Return: THe addition result
  */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
  * op_sub - Subtraction operator
  * @num1: First integer
  * @num2: Second integer
  *
  * Return: Subtraction result
  */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
  * op_mul - Multiplication operator
  * @num1: First integer
  * @num2: Second integer
  *
  * Return: Multiplied result
  */
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
  * op_div - Division operator
  * @num1: First integer
  * @num2: Second integer
  *
  * Return: The divided result
  */
int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (num1 / num2);
}

/**
  * op_mod - Modulous operator
  * @num1: Firest integer
  * @num2: Second integer
  *
  * Return: The reminder
  */
int op_mod(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (num1 % num2);
}
