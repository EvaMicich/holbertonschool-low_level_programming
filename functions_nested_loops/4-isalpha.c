#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isalpha - checks whether a char is a letter of lower or upper alphabet
 * @c: character being checked for alphabet
 * Return: 1 for alphabet, 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
