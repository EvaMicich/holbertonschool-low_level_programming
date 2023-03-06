#include "main.h"
/**
 * factorial - calculates factorial of n
 * @n: number to calculate factorial from
 * Return: Factorial value, -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
