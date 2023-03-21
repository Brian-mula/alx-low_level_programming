#include "main.h"
/**
 * _abs - checks the absolute value;
 * @c: the value to be checked
 * Return: Absolute value of a number
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_bal;

	abs_bal = c * -1;
	return (abs_bal);
	}
	return (c);
}
