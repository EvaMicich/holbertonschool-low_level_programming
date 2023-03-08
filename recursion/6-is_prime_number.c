#include "main.h"
/**
 * prime_checker - checks number n is prime
 * @n: the number to be tested
 * @i: variable iterated to check for factors of n
 * Return: 1 for prime 0 for not prime
 */
int prime_checker(int i, int n)
{
	while (i < n)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
		else
		{
			return (prime_checker(i + 1, n));
		}
	}
	return (1);
}

/**
 * is_prime_number - test if n is prime number
 * @n: the number to be tested
 * Return: prime returns 1, not returns 0
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	else
		return (prime_checker(2, n));
}
