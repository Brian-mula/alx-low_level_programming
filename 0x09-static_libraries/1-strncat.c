#include "main.h"

/**
 * _strncat - Concatenating two strings
 * @dest: destination string.
 * @src: The source string.
 * @n: The byte number
 *
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int position = 0, destination_length = 0;

	while (dest[position++])
		destination_length++;
	for (position = 0; src[position] && position < n; position++)
		dest[destination_length++] = src[position];
	return (dest);
}
