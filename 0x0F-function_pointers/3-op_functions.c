#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - for adding two numbers
 * @a: first argument
 * @b: second argument
 * Return: addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - for returning the substraction result
 * @a: first argument
 * @b: second argument
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - for returning the multiplication result
 * @a: first argument
 * @b: second argument
 *  Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - for returning the result of division
 * @a: first argument
 * @b: second argument
 *  Return: returns the division result
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
 * op_mod - for returning the remainder of division
 * @a: first argument
 * @b: second argument
 * Return: returns the remainder/ modulous
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
