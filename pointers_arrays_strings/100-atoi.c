#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks if char is 0-9
 * @c: the char to check
 * Return: Always 0.
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/**
 * skip_it - skips any leading chars that are not digits
 * @str: string being altered
 * Return: String without leading chars
 */
char *skip_it(char *str)
{
	while (*str != '\0')
	{
		if (is_digit(*str))
		{
			return (str);
		}
		str = str + 1;
	}
	return (str);
}

/**
 * is_negative - asses if the overall sign is negative
 * @number: the number being assesed for overall sign
 * Return: 1 for negative 0 for positive
 */
int is_negative(char *number)
{
	int number_of_negative_sign;

	number_of_negative_sign = 0;
	while (*number != '\0')
	{
		if (is_digit(*number) == 1)
		{
			break;
		}
		if (*number == '-')
		{
			number_of_negative_sign = number_of_negative_sign + 1;
		}
		number = number + 1;
	}
	return (number_of_negative_sign % 2);
}
/**
 * number_of_digits - number of digits in the string
 * @s: the string being assessed for digits
 * Return: value of the number of digits
 */
int number_of_digits(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (is_digit(s[i]) == 0)
		{
			break;
		}
		i = i + 1;
	}
	return (i);
}

/**
 * _atoi - produces the number as an int from within a string
 * @s: the string to have the number extracted
 * Return: the int value extracted from the string including +/- sign
 */
int _atoi(char *s)
{
	char *first_digit;
	int power_of_ten;
	int result;
	int current_digit;
	int length;
	int i;

	result = 0;
	power_of_ten = 1;
	first_digit = skip_it(s);
	length = number_of_digits(first_digit);
	i = length - 1;
	while (i >= 0)
	{
		current_digit = first_digit[i] - '0';
		result = result + current_digit * power_of_ten;
		i = i - 1;
		power_of_ten = power_of_ten * 10;
	}
	if (is_negative(s) == 1)
	{
		return (result * -1);
	}
	return (result);
}
