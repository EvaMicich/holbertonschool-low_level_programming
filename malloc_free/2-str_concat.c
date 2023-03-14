#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to array containing new string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i;
	int j;

	array = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		j = j + 1;
		i = i + 1;
	}
	array[i] = '\0';
	return (array);
}
