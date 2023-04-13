#include "main.h"
#include <stdlib.h>

/**
 * array_range - for creating array of integers
 * @min: first array value
 * @max: last array value
 *
 * Return: Based on the condition
 */
int *array_range(int min, int max)
{
	int *array, position, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (position = 0; position < size; position++)
		array[position] = min++;

	return (array);
}
