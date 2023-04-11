#include "main.h"

/**
 * *_memcpy - for copying memory
 * @dest: memory 
 * @src: source memory
 * @n: the length of source
 *
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
