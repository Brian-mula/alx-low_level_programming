#include "main.h"
#include <stdio.h>

/**
 * set_string - for seting pointer values
 *
 * @s: this is a double ointer
 *
 * @to: this is the pointer
 *
 * Return: void
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
