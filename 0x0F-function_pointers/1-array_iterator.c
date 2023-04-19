#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - for executing a function on each array
 * @array: array
 * @size: the array size
 * @action: a pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
