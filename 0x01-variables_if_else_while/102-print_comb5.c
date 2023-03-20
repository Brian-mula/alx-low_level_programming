#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	int p, d;

	for (p = 0; p <= 98; p++)
	{
	for (d = p + 1; d <= 99; d++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((d / 10) + '0');
	putchar((d % 10) + '0');
	if (p == 98 && d == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
