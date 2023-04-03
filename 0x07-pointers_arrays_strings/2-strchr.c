#include "main.h"

/**
 * _strchr - character search
 * @s: searched string
 * @c: found character
 * Return: Pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
		return (s);
		}
	}
	return (0);
}
