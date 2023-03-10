#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: concat strin returned to this variable
 * @src: string to concat
 * Return: char* of concat string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

    /* find the offset of the null terminator in dest */
	while (dest[i] != '\0')
	{
		i++;
	}
    /* copy the bytes from the src string there */
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
    /* set the null terminator */
	dest[i] = '\0';
    /* return the pointer to the destination array */
	return (dest);

}
