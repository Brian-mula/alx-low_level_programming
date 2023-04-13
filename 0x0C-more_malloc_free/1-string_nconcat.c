#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - for concatenating two strings
 * @s1: first character
 * @s2: second character
 * @n: maximum number of bytes to be returned
 *
 * Return: Based on the condition
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n, position;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (position = 0; s1[position]; position++)
		length++;

	concat = malloc(sizeof(char) * (length+ 1));

	if (concat == NULL)
		return (NULL);

	length = 0;

	for (position = 0; s1[position]; position++)
		concat[length++] = s1[position];

	for (position = 0; s2[position] && position < n; position++)
		concat[length++] = s2[position];

	concat[length] = '\0';

	return (concat);
}
