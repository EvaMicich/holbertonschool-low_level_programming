#include "main.h"
/**
 * _sqr_checker - checks each number from 1 to n to check for square
 * @n: the number to be tested
 * @a: square root value being checked
 * Return: value of natural square root, or -1 for not natural
 */
int _sqr_checker(int a, int n)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
		{
			return (a);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (_sqr_checker(a + 1, n));
	}
}

/**
 * _sqrt_recursion - find square root of the number n
 * @n: the number to be tested
 * Return: value of natural square root, or -1 for not natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if ((n == 0) || (n == 1))
	{
		return (n);
	}

	else
	{
		return (_sqr_checker(1, n));
	}
}
