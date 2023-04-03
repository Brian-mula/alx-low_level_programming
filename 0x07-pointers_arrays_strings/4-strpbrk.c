#include "main.h"

/**
 * *_strpbrk - for checking strings
 *
 * @s: checked string
 * @accept: the the character being searched being looked for
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (0);
}
