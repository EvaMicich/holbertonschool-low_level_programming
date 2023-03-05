#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0') /*check each char until end*/
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index = index + 1;
		}
/*while char is not a lower case char, move to next char*/
			if (str[index - 1] == ' ' ||
			    str[index - 1] == '\t' ||
			    str[index - 1] == '\n' ||
			    str[index - 1] == ',' ||
			    str[index - 1] == ';' ||
			    str[index - 1] == '.' ||
			    str[index - 1] == '!' ||
			    str[index - 1] == '?' ||
			    str[index - 1] == '"' ||
			    str[index - 1] == '(' ||
			    str[index - 1] == ')' ||
			    str[index - 1] == '{' ||
			    str[index - 1] == '}' ||
			    index == 0)
/*if the remaining lower case is the first char, or preceeded by special char,*/
			{
				str[index] = str[index] - 32;
/*replace with capital letter, by using ascii code - 32. move to the next char*/
			{
		index = index + 1;
	}
	return (str);
/*return the string with replaced capital letters*/
}
