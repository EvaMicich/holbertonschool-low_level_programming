#include "main.h"

/**
 * flip_bits - returns the number of bits to flip between numbers
 * @n : first number to compare
 * @m : second number to compare
 * Return: number of bits to flip between numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	count = 0;
	diff = n ^ m;
	while (diff >= 1)
	{
		if ((diff & 1) == 1)
		count = count + 1;
		diff = diff >> 1;
	}
	return (count);
}
