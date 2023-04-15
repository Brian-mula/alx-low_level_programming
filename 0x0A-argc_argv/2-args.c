#include <stdio.h>
/**
 * main -for printing all arguments
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

		return (0);
}
