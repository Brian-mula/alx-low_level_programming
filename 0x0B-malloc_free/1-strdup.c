#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to memory
*@str:String to be copied
*
*Return: depends with the condition
*/

char *_strdup(char *str)
{
	char *cop;
	int position, length;

	if (str == NULL)
		return (NULL);

	for (position = 0; str[position]; position++)
		length++;
	cop = malloc(sizeof(char) * (length + 1));

	if (cop == NULL)
		return (NULL);

	for (position = 0; str[position]; position++)
	{
		cop[position] = str[position];
	}

	cop[length] = '\0';

	return (cop);

}
