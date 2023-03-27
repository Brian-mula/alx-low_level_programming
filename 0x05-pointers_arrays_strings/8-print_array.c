#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements
 * @a: Array of ints
 * @n: Number of elements
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
