#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - for printing numbers using separators
 * @separator: seperator
 * @n: count
 * @...: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *b;

va_start(list, n);

for (i = 0; i < n; i++)
{
if (separator != NULL && i != 0)
printf("%s", separator);
b = va_arg(list, char *);
printf("%s", (b == NULL) ? "(nil)" : b);
}
printf("\n");
va_end(list);
}
