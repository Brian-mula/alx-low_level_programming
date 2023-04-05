#include "main.h"

/**
 * prime - to find prime
 * @j: int param
 * @k: int param
 * Return: bool
 */

int prime(int j, int k)
{
	if (k % j == 0)
	{
		return (0);
	}
	else if (k / 2 > j)
	{
		return (prime(j + 2, k));
	}
	else
	{
		return (1);
	}
}




/**
 * is_prime_number - to find prime number
 * @n: the value tested
 * Return: prime number
 *
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (prime(3, n));
	}
}
