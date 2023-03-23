#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be checked
 * Return: 1 for digit and 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= 40 && x <= 57)
	{
	return (1);
	}
	return (0);
}
