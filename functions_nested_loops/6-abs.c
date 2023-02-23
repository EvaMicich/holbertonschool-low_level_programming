#include "main.h"
/**
 * _abs - returns all numbers as absolute
 * @r: number to be converted
 * Return: the absolute number
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	return (0);
}
