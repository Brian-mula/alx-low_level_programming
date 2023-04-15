#include <stdlib.h>
#include <stdio.h>
/**
 *main - for multiplying two numbers
 *@argc: argument count
 *@argv: argument variable
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int y, x, prod;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);
	x = atoi(argv[2]);
	prod = y * x;

	printf("%d\n", prod);
	return (0);
}
