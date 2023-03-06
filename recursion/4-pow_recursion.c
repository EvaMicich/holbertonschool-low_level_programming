#include "main.h"
/**
 * _pow_recursion - calculates x to the power y
 * @x: the base number
 * @y: th epowers number
 * Return: the vulue of the power x to y, -1 is error
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (-1);


}
