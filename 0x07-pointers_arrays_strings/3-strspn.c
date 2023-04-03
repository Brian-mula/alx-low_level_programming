#include "main.h"
#include <stdio.h>

/**
 * *_strspn - get prifix length
 * @s: printed character
 * @accept: the string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (k = 0; accept[k] != s[i]; k++)
	{
		if (accept[k] == '\0')
			return (i);
	}
	}
	return (i);
}
