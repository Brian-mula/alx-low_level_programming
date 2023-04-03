#include "main.h"

/**
 ** _strpbrk - for searching string
 *
 * @s: checked string
 * @accept: the string being looked for
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s+i);
		}
	}
	return (0);
}