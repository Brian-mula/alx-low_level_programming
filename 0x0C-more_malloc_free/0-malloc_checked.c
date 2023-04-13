#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - for allocating memory
  * @b: memory allocated
  *
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
