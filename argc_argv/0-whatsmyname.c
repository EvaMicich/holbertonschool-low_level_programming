#include <stdio.h>
/**
 *main - prints the function name
 * @argc: text from command line
 * @argv: array referencing argc
 *Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
