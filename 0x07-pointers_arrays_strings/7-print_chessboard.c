#include "main.h"

/**
 * print_chessboard - it is used to print out the chessboard
 *
 * @a: printed chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int firstindex, secondindex;

	for (firstindex = 0; a[firstindex][7]; firstindex++)
	{
		for (secondindex = 0; secondindex < 8; secondindex++)
			_putchar(a[firstindex][secondindex]);
		_putchar('\n');
	}
}
