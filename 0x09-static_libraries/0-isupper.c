#include "main.h"

/**
 * _isupper - convert string to upper
 * @c: the string to be converted
 * Return: int
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
