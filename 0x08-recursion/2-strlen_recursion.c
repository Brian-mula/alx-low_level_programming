#include "main.h"

/**
 * _strlen_recursion - to return the length of string
 * @s: the string required
 * Return: the length of string
 *
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (!(*s == '\0'))
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
