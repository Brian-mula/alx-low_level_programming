#include "main.h"

/**
 * *_strstr - for lacating substring
 * @needle: substring to find
 * @haystack: searched string
 * Return: pointer
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *source = haystack;
		char *substring = needle;

		while (*haystack && *substring && *haystack == *substring)
		{
			haystack++;
			substring++;
		}
		if (!*substring)
			return (source);
		haystack = source + 1;
	}
	return (0);
}
