#include "main.h"
#include <stdlib.h>

/**
 * _calloc - For allocating memory
 * @nmemb: total elements
 * @size: size of bytes
 *
 * Return: Based on the condition
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int position;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (position = 0; position < (size * nmemb); position++)
		filler[position] = '\0';

	return (mem);
}
