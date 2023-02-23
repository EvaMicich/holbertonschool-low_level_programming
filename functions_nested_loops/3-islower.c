#include "main.h"
/**
*_islower - checks for lowercase character
*c is the character being checked for lowercase
*Return 1 for lower case char, 0 for anything else
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
