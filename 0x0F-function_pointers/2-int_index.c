#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - for searching for an integer
 * @array: array
 * @size: array size
 * @cmp: a pointer to function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
