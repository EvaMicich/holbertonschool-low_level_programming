#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *is_num - checks if string is number
 *@str: string to test
 *
 *Return: 1 for number, 0 not number
 */
int is_num(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
		{
			return (0);
		}
		else
		{
			i = i + 1;
		}
	}
	return (1);
}
/**
 *main - multiplies 2 numbers
 *@argc: tesxt from command line
 *@argv: array referencing text
 *Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	int val, sum, i, num_check;

	i = 1;
	val = 0;
	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		num_check = is_num(argv[i]);
		if (num_check == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			val = atoi(argv[i]);
			sum = sum + val;
			i = i + 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
