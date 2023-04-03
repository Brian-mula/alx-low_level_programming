#include "main.h"

/**
 * _memory - to copy content
 * @src: pointer to source
 * @dest: pointer to destination
 * @n: bytes number
 * Return: pointer to destination
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(dest +i) = *(src + i);
}
	return (dest);
}

