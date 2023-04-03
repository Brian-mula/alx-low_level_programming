#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - for printing sum of two diagnols of a square matrix
 *
 * @n: it is an integer matrix
 *
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int position, firstsum = 0, secondsum = 0;

	for (position = 0; position < size; position++)
	{
		firstsum += a[position];
		a += size;
	}
	a -= size;

	for (position = 0; position < size; position++)
	{
		secondsum += a[position];
		a -= size;
	}
	printf("%d, %d\n", firstsum, secondsum);
}
