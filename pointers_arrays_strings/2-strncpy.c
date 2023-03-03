#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy at most n chars of src to dest
 * @dest: copied string returned to this variable
 * @src: string to copy
 * @n: limit of chars to be transferred
 * Return: char* of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

    /* find the offset of the null terminator in dest */
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
    /* copy the bytes from the src string there, stopping at the nth char */
	while ((k < n) && (src[k] != '\0'))
	{
		dest[i] = src[k];
		i = i + 1;
		k = k + 1;
	}
    /* set the null terminator */
	dest[i] = '\0';
    /* return the pointer to the destination array */
	return (dest);
}
