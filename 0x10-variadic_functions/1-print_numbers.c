#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - for printing numbers
 * @separator: character to separate
 * @n: element count
 * @...: ...
 * Return: nothing 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i;

va_start(a, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(a, int));

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(a);
}
