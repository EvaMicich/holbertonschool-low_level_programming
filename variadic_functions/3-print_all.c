#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints anything of correct format
  * @format: types of data being printed
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_char },
		{ "i", print_integer },
		{ "f", print_float },
		{ "s", print_string }
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j = j + 1;
		}
		i = i + 1;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_char - prints a char
  * @separator: the separator between output
  * @args: list of variadic arguments
  *
  * Return: void
  */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_integer - prints an integer
  * @separator: the separator between output
  * @args: list of variadic arguments
  *
  * Return: void
  */
void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_float - prints a float
  * @separator: the separator between output
  * @args: list of variadic arguments
  *
  * Return: Nothing
  */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_string - prints the content of pointer to string
  * @separator: the separator between output
  * @args: list of variadic arguments
  *
  * Return: Nothing
  */
void print_string(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
