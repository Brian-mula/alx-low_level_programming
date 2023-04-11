#include "main.h"

/**
 * *_memset - filling the first n bytes of memory
 * @s: A pointer
 * @b: character
 * @n: bytes
 * Return: pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
