#include "main.h"

/**
 * *_memset - fills the memory location pointed to by @s with the first constant byte of @b for the first @n bytes
 * @s: filled memeory pointer
 *
 * @b: filled up value
 *
 * @n: memory size
 *
 * Return: Pointer to *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
	return (s);
}
