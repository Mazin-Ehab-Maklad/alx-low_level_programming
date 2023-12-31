#include "main.h"
/**
 * prime_helper - checks if a number is prime
 * @n: number to be checked
 * @div: divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_helper(int n, int div)
{
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (prime_helper(n, div - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}

