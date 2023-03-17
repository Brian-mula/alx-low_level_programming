#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: always return 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
