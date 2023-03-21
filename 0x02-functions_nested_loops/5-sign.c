#include "main.h"
/**
 * print_sign - checks the number
 * @n: the number to be checked
 * Return: 1 if greater than 0 or -1 if less than 0 or 0 if it is equal to 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
