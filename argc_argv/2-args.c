#include <stdio.h>
/**
 *main - prints all arguments
 * @argc: text from command line
 * @argv: array referencing argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
