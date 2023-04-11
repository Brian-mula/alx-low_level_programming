#include "main.h"
#include <stdlib.h>
/**
 *create_array -  create memory of size size
 *             
 *@size: size of bytes in memory
 *@c: char to initialize with the array
 *Return: Depends with the condition
 */
char *create_array(unsigned int size, char c)
{
char *arrays;
unsigned int pos;

if (size == 0)
{
return (NULL);
}
arrays = malloc(sizeof(char) * size);
if (arrays == NULL)
{
return (NULL);
}
for (pos = 0; pos < size; pos++)
{
arrays[pos] = c;
}
return (arrays);
}
