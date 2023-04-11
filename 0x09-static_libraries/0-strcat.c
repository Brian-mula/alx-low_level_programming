#include "main.h"

/**
 * *_strcat - concatenation
 * @src: the source string
 * @dest: the destiation string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int position = 0;
	int destination_length = 0;

	while (dest[position++])
		destination_length++;
	for (position = 0; src[position]; position++)
		dest[destination_length++] = src[position];
	return (dest);
}
